import UIKit

//swift5의 중첩함수 사용 방법. 복잡하거나 긴 함수를 간단하게 정리할 수 있다.

func outFunc(_ value: Int) -> Int {
    print("outFunc함수에 진입했습니다.")
    
    func inFunc(_ inValue: Int) -> Int {
        print("inFunc함수에 진입했습니다.")
        return inValue + 1
    }
    
    return inFunc(value)
}

print(outFunc(30))
/*
 result :
 outFunc함수에 진입했습니다.
 inFunc함수에 진입했습니다.
 31
 */

//swift5의 함수는 일급객체라는 점을 이용하여 함수의 매개변수로 함수 자체를 넘겨주는 예제
func recievFunc(checkNum: Int, arguFunc: (Int) -> Bool) {
    if arguFunc(checkNum) {
        print("ok! fine!")
    } else {
        print("fail!")
    }
}

func isZero(num: Int) -> Bool {
    if num == 0 {
        return true
    } else {
        return false
    }
}

var num = 1
print("run \"recievFunc(checkNum: num, arguFunc: isZero)\"")
recievFunc(checkNum: num, arguFunc: isZero)
/*
 result :
 run "recievFunc(checkNum: num, arguFunc: isZero)"
 fail!
 */

num = 0
print("run \"recievFunc(checkNum: num, arguFunc: isZero)\"")
recievFunc(checkNum: num, arguFunc: isZero)
/*
result :
run "recievFunc(checkNum: num, arguFunc: isZero)"
ok! fine!
*/

//default parameter value를 지정하여 함수 정의하기 (Void 반환 값 생략 가능)
func haveDefault(fruit: String = "banana") {
    print("I like \(fruit)")
}

haveDefault()
haveDefault(fruit: "apple")
//result : I like banana
//result : I like apple

//여러개의 파라매터를 사용하는 함수 정의하기
func makeSort(nums: Int...) -> [Int] {
    //nums 를 Int형 array 처럼 사용할 수 있다.
    //개념을 이해하기 위해 정말 의미 없는 함수를 선언하게 됐다..
    return nums.sorted()
}

let array = makeSort(nums: 5, 10, 50, 1, 4)
print(array)
//result : [1, 4, 5, 10, 50]

//함수 내부의 변화가 외부에도 영향을 미치는 함수를 선언
//C++의 참조형 함수와 비슷하다.
func switchFunc(left: inout Int, right: inout Int) {
    let tempVar = left
    left = right
    right = tempVar
}

var left = 10
var right = 20
print(left, right)
//result : 10 20

switchFunc(left: &left, right: &right)
print(left, right)
//result : 20 10


//Function Type에 대한 정리
//모든 함수는 함수의 형이 존재한다. 예를들어 바로 위의 switchFunc 같은 경우 (inout Int, inout Int) -> Void 형의 함수이다.
//따라서 함수의 형 으로 변수를 지정하고, 함수를 대입하는 동작도 가능하다
var varFunc: (inout Int, inout Int) -> Void = switchFunc
varFunc(&left, &right)
print(left, right)
//result : 10 20

//함수를 파라매터로 사용하거나, 반환 값으로 사용할 수도 있다.
func doFunction(recievedFunc: (String, String) -> String, _ left: String, _ right: String) {
    print("I'll call recievedFunc")
    print("result : \(recievedFunc(left, right))")
}

func semiFunction(a: String, b: String) -> String {
    a + b
}

doFunction(recievedFunc: semiFunction, "주성민과 ", "조승아")
/*
 result :
 I'll call recievedFunc
 result : 주성민과 조승아
 */

//반환값으로 함수를 사용하는 예시

func switchFunction(_ num: Int) -> (Int, Int) -> Int {
    func add(a: Int, b: Int) -> Int {
        a + b
    }
    func multi(a: Int, b: Int) -> Int {
        a * b
    }
    
    if num == 1 {
        return add
    } else {
        return multi
    }
}

let num1 = 3
let num2 = 5
var optionFunc = switchFunction(1)
print(optionFunc(3, 5))
//result : 8

optionFunc = switchFunction(0)
print(optionFunc(3, 5))
//result : 15

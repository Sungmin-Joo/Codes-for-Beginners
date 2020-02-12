import UIKit

func add(leftValue: Int, rightValue: Int) -> Int {
    return leftValue + rightValue
}
//스위프트의 함수는 기본으로 매개 변수 이름을 변수의 레이블로 사용한다.
print(add(leftValue: 1, rightValue: 2))
//result : 3


//함수를 정의할 때 매개 변수 이름 앞에 레이블을 커스텀하거나 '_'을 작성하여 레이블을. 생략할 수 있다.
func multi(_ leftValue: Int, rv rightValue: Int) -> Int{
    return leftValue * rightValue
}
print(multi(3, rv: 4))
//result : 12


//여러 값을 반환하는 함수를 정의하기 위해 튜플을 사용할 수도 있다. 이 때 반환 값인 튜플 자체를 데이터로 사용할 수 있고, 튜플의 요소는 ".0"과같은 표현의 인덱스로 접근하거나 변수의 이름(레이블)로 접근 가능하다.
func calc(_ numList: [Int]) -> (min: Int, max: Int, sum: Int){
    var min = numList[0]
    var max = numList[0]
    var sum = 0
    
    for num in numList{
        sum += num
        
        if num > max {
            max = num
        } else if num < min {
            min = num
        }
    }
    
    return (min, max, sum)
}


let array = [100, 5, 10, 66, 10]
let result = calc(array)
print(result)
print(result.min)
print(result.0)
/*
 result :
 (min: 5, max: 100, sum: 191)
 5
 5
 */

//반환값이 없는 함수 형태
func noReturn(a: Int) -> Void {
    print("recieve \(a)")
}

noReturn(a: 33)
//recieve 33

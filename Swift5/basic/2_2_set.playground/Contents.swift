import UIKit
//****set의 element는 hashable type이여야 한다. -> 기본적인 type(String, Int, Double, Bool)은 hasable 이다.
//간단한 set 자료형(구조체) 사용 법
//값을 수정하기 위해 let 대신 var로 선언
func checkFunc(input: Set<String>) {
    guard !input.isEmpty else {
        print("setVar is empty")
        return
    }
    for element in input {
        print("\(element) is setVar's element")
    }
}

var setVar: Set<String> = Set<String>()

checkFunc(input: setVar)
setVar.insert("주성민")
checkFunc(input: setVar)
setVar.insert("조승아")
checkFunc(input: setVar)
setVar.insert("주성민")
checkFunc(input: setVar)
//결과는 생략, 똑같은 원소를 두 번 대입해도 setVar에는 한 개의 "주성민"이 있다.

//여러가지 집합 표현
var set_a: Set<Int> = [1, 2, 3, 4, 5]
var set_b: Set<Int> = [4, 5, 6, 7, 8]

//교집합
print(set_a.intersection(set_b))
//result : [4, 5]

//교집합의 여집합
print(set_a.symmetricDifference(set_b))
//result : [3, 8, 6, 2, 1, 7]

//합집합
print(set_a.union(set_b))
//result : [3, 8, 6, 5, 4, 2, 1, 7]

//set_a 의 set_b에 대한 차집합
print(set_a.subtracting(set_b))
//result : [3, 1, 2]

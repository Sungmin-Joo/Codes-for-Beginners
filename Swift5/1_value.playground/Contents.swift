import UIKit
//공부하면서 주석과 함께 예제를 만들어 보는 중..

//기본 출력 함수
print("Hello, world")

//상수 선언
let pi = 3.14
//pi = 25   <-  상수의 값을 변경할 시 컴파일 오류
print(pi)
//result : 3.14

//변수 선언
var var1 = 10
var var2: Int = 20
print(var1, var2)
//result : 10 20

//변수나 상수를 선언할 때 충분한 정보를 포함하지 않으면 자료형을 명시해준다. + 자료형을 추론이 아닌 명시할 경우 컴파일 시간이 단축
let const1 = 10.1
let const2: Float = 10.1

print(type(of: const1))
//result : Double
print(type(of: const2))
//result : Float

//변수나 상수를 할당할 때 같은 자료형을 사용하여야 한다. 적절한 자료형 변환을 사용해보자.
let string = "my age : "
let age = 26
let fullString = string + String(age)
print(fullString)
//result : my age : 26

// '/'문법을 사용해서 문자열 안에 변수 넣기
var count: Int = 30
var numString = "count is \(count), wow!"
print(numString)
//result : count is 30, wow!

//위 문법을 사용한 후 변수 count의 값을 바꿔도 문자열 numString의 값은 변하지 않는다
count = 20
print(numString)
//result : count is 30, wow!

//Type Conversion
let intVar: Int = 3
let doubleVar: Double = 3.14
//let sum = intVar + doubleVar
let sum = intVar + Int(doubleVar)
print(sum)
//result : 6
//Type casting 이 아니라 새로운 Int 자료형 데이터를 생성한 후 덧샘을 수행한다.

//Tuple
let codeNtext = (404, "Not Found")
let (code, text) = codeNtext

print("code : \(code), text : \(text)")
//result : code : 404, text : Not Found
let (status,_) = codeNtext
print("Just use code : \(status)")
//result : Just use code : 404

import UIKit
//딕셔너리의 반복문 사용과 while, repeat - while 구문 정리
let numDict = [
    "Joo": [100, 200, 300, 5],
    "Jo": [1, 3, 4, 999, 300],
    "Jang": [-1, -5, -1, 3],
]

var maxNum = -999999999
//빈 문자열을 정의하는 방법
var name = String()
for (key, values) in numDict {
    for value in values {
        if value > maxNum{
            maxNum = value
            name = key
        }
    }
}

let resultString = """
The largest number is \(name)'s number \(maxNum).
"""
print(resultString)
//result : The largest number is Jo's number 999.

var count: Int = 0

while count < 10 {
    //swift에서 ++연산은 없으니 유의하자.
    count += 1
}
print(count)
//result : 10

count = 0
repeat {
    count += 1
} while count < 10
print(count)
//result : 10
//c 언어의 do - while 구문과 유사하다.

//swift5에서 for 반복문 정수 색인 사용하기
var numList = [Int]()
for i in 0..<10 {
    numList.append(i)
}
print(numList)
//result : [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
//범위를 지정할 때 어디서 어디까지가 포함되는 범위인지 잘 인지하기

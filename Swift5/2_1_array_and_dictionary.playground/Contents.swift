import UIKit

//간단한 배열 선언 문법
var array = [1, 2, 3, 4]
print(array)
//result : [1, 2, 3, 4]

array.append(5)
array[0] = 100
print(array)
//result : [100, 2, 3, 4, 5]

var dict = [
    "Joo" : "ugly",
    "Jo" : "pretty",
]
print(dict)
//result : ["Jo": "pretty", "Joo": "ugly"]

dict["Jang"] = "soso"
print(dict)
//result : ["Jang": "soso", "Jo": "pretty", "Joo": "ugly"]
//array의 append와 다르게 딕셔너리 자료형에서는 순서를 고려하지 않는다.

//빈 배열 선언
var emtyArray = [String]()
emtyArray.append("aa")
print(emtyArray)
//result : ["aa"]

//이미 선언된 배열을 비울 때 사용하는 문법
emtyArray = []
print(emtyArray)
//result : []

//빈 딕셔너리 선언
var emtyDict = [String: String]()
emtyDict["dream"] = "handsome"
print(emtyDict)
//result : ["dream": "handsome"]

//이미 선언된 딕셔너리를 비울 때 사용하는 문법
emtyDict = [:]
print(emtyDict)
//result : [:]

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

//딕셔너리 문법
var dictVal = [String: Int]()
dictVal["조승아"] = 1
dictVal["주성민"] = 2
print(dictVal.count)
//result : 2

if dictVal.isEmpty {
    print("dictVal is Empty")
} else {
    for (key, val) in dictVal {
        print(key, val)
    }
}
/*
 result :
 조승아 1
 주성민 2
 */

//키 값에 해당하는 값의 존재가 확실하지 않을때 쓰는 문법 - 옵셔널 적용
let haveVar: Int? = dictVal["전준범"]
print(haveVar)
//"전준범"에 해당하는 값이 없기 떄문에 nil값이 들어간다. 반대로 생각하면 특정 키에 해당하는 값의 쌍을 지우려면 nil을 대입하면 된다.

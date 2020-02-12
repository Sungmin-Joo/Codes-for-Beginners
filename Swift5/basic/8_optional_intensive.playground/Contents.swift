import UIKit

//값에 대한 확신이 없을때 옵셔널을 사용하여 판단한다.
let number: Int?
number = nil
print(number)
//result : nil
//옵셔널 변수이기 때문에 nil을 대입할 수 있다.

let array: [String] = ["a", "b", "3", "100", "abc"]

for element in array {
    //옵셔널 문법으로 element가 숫자인지 문자열인지 판단해보기
    //Int() 함수의 리턴 값은 옵셔널이라는 것을 숙지하자.
    if let tempVal = Int(element) {
        print("\(tempVal) is number.")
    } else {
        print("\(element) is not number.")
    }
}
/*
 result :
 a is not number.
 b is not number.
 3 is number.
 100 is number.
 abc is not number.
 */


//guard let문 문법
//실무에서 많이 쓰인다는 guard let 구문으로 위와 같은 동작을 구현
func guardFunc(_ char: String) {
    guard let tempVal = Int(char) else {
        print("\(char) is not number. return...")
        return
    }
    print("\(char) is number.")
}

for element in array {
    guardFunc(element)
}
/*
result :
a is not number. return...
b is not number. return...
3 is number.
100 is number.
abc is not number. return...
*/

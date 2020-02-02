import UIKit
/*
 클래스와 구조체의 공통점
 프로퍼티, 메소드, 생성자가 존제
 subscript, extension, protocol confirm 기능을 갖는다.
 
 클래스와 구조체의 차이점
 클래스는 상속이 가능하다.
 클래스는 typecasting이 지원되어 런타임시 타입을 체크하거나 변경 가능함
 클래스는 소멸자가 있다.
 클래스는 참조 타입으로 여러곳에서 하나의 인스턴스를 참조할 수 있다.
 
 */

//구조체의 정의, 구조체는 특별한 생성자가 자동으로 생성된다.
struct oneStruct {
    let a : Int
}

let firstStruct = oneStruct(a: 1)
print(firstStruct)
// result : oneStruct(a: 1)

//클래스 정의, 특수한 경우를 제외하곤 생성자를 정의해 주는게 좋다.
class oneClass {
    var a = 13
}
//인스턴스를 생성하는 방법
let firstClass = oneClass()
//인스턴스의 프로퍼티에 접근하기 위해서 "."을 사용한다.
print(firstClass.a)
//result : 13
//firstClass는 상수(let)로 선언했지만, 가르키고있는 인스턴스가 불변이라는 뜻 이고, 인스턴스 내부의 값은 변화가 가능
firstClass.a = 10
print(firstClass.a)
//result : 10

//reference(참조)형 자료형은 가르키고있는 인스턴스가 같은 인스턴스인지 확인하는 연산이 존재한다.
let secondClass = firstClass
if firstClass === secondClass {
    print("same instance")
}
//"same instance"

/*
 구조체는 value type, 클래스는 reference type 이다.
 클래스를 사용하는 경우
 1. 상속이 필요한 경우
 2. 참조형 자료형이 필요한 경우
 3. 상태관리를 주로 해야하는 경우
 
 구조체를 사용하는 경우
 1. 관련있는 데이터를 캡슐화 하는 경우
 2. 값이 참조되지 않고 복사되는 것이 더 좋은 경우
 3. 기존의 타입에서 상속될 필요가 없는 경우
 
 구조체 내부의 프로퍼티는 밸류타입이여야 자연스럽다. (당연히 구조체가 밸류타입이니까)
 그래서 모든 자료형이 구조체로 정의 되어있다.
 let으로 선언시 구조체는 완전한 이뮤터블 자료형을 만들 수 있다.
 클래스는 참조를 사용하기 때문에 구조체가 성능이 조금 더 좋다.
 함수형 프로그래밍에 조금 더 효과적이다.
 */

import UIKit
//enum과 case keyword를 이용해서 새로운 type을 정의
enum directionEnum {
    case up
    case down
    case left
    case right
}
//direction은 type, 각 case는 멤머가 된다.

var direct: directionEnum
direct = .up
//var direct = directionEnum.up와 동일한 문장이다.
print(direct)
//result : up

//enum타입의 멤버를 이용하여 case문을 사용할 수도 있다.
//반드시 모든 경우에 대해 case문을 작성해야한다.
switch direct {
case .up:
    print("this val is up")
case .down:
    print("this val is down")
case .left, .right:
    print("this val is left or right")
}
//result : this val is up

//멤버들에게 raw value를 할당할 수 있다.
enum ASCIIChar: Character {
    case lineFeed = "\n"
    case carriageReturn = "\r"
    case tab = "\t"
}

print(ASCIIChar.tab)
print("this is tab's  raw val = '\(ASCIIChar.tab.rawValue)'")
/*
 result :
 tab
 this is tab's  raw val = '    '
 */

//Raw Value의 묵시적 할당 케이스
//1. raw value의 타입이 Int 일 때 어떤 멤버의 값이 정해지면 그 다음 멤버부터 1씩 증가하면서 raw value가 자동으로 할당.
enum autoInt: Int {
    case a = 1, b, c, d, e
}
print(autoInt.c.rawValue)
//result : 3

//2. raw value의 타입이 String일 때 멤버의 이름 자체가 자동으로 raw value가 된다.
enum autoString: String {
    case abc
    case def
}
print(autoString.abc.rawValue)
//result : abc

//caseIterable protocol을 통해 iterating 사용 가능
enum menu: CaseIterable {
    case banana, apple, orange
}
print("there are \(menu.allCases.count) items")

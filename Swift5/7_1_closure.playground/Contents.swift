import UIKit

//클로저는 자주 쓰이는 swift문법 중 하나이다. 왜 자주 쓰이는지는 천천히 알아가보자...
//클로저는 이름이 없고 해당 클로저를 둘러 싼 코드 블럭의 값들을 캡쳐할 수 있다.
//캡쳐에 대한 개념은 따로 공부하고 예제 코드에서는 예시만!

func makeMultiplier(_ baseVal: Int, _ mutipleVal: Int) -> () -> Int {
    var capturedVal = baseVal
    func multiplier() -> Int {
        capturedVal *= mutipleVal
        return capturedVal
    }
    return multiplier
}

let multiplier: () -> Int = makeMultiplier(3, 4)
//baseVal에 3을 넘겼기 떄문에 capturedVal은 3이 되고 클로저는 해당 값을 기억한다.
print("do \"multiplier()\" : \(multiplier())")
//result: do "multiplier()" : 12
//첫 번째 호출시 capturedVal에 mutipleVal이 곱해진 값으로 변경되고 그 값을 반환한다. 변경된 값은 유지된다.

print("do \"multiplier()\" : \(multiplier())")
//result : do "multiplier()" : 48
//두 번째 호출 시 capturedVal은 12로 캡쳐되있고 4를 또 곱해주기 때문에 48이라는 값을 반환한다.

//새로운 makeMultiplier를 만들 시 별개로 동작하게 되는데 아래 코드를 통해 확인해보자
let secondMultiplier: () -> Int = makeMultiplier(2, 2)
print("do \"secondMultiplier()\" : \(secondMultiplier())")
//result: do "multiplier()" : 4
//첫 번째 호출시 capturedVal에 mutipleVal이 곱해진 값으로 변경되고 그 값을 반환한다. 변경된 값은 유지된다.

print("do \"secondMultiplier()\" : \(secondMultiplier())")
//result : do "multiplier()" : 8
//두 번째 호출 시 capturedVal은 4로 캡쳐되있고 2를 또 곱해주기 때문에 8이라는 값을 반환한다.
//클래스의 인스턴스 개념에서 멤버 변수와 같은 맥락으로 생각하면 조금 더 이해하기 쉬울 것 이다.


//sorted 함수를 통해 여러가지 클로저에 대해 공부해보자
//가장 기본적인 클로저의 사용법이다. 마치 람다와 비슷하다.
let array: [Int] = [100, 50, 1, 20, 40, -1]
print(array.sorted(by: { (num1: Int, num2: Int) -> Bool in
    return num1 < num2
}))
//result : [-1, 1, 20, 40, 50, 100]

//type inference - 타입 추론을 이용하여 조금 더 간략한 클로저 선언 가능
print(array.sorted(by: { num1, num2 in
    return num1 > num2
}))
//result : [100, 50, 40, 20, 1, -1]
//soreted 함수는 호출하는 배열 원소의 자료 형과 동일한 자료형을 입력으로 받고 Bool값을 반환하기 때문에 추론이 가능하다.

//implicit returns - 암묵적 반환으로 return키워드를 생략 가능하다. 한 줄로 함수가 정의 되어야하며, 리턴값과 자료형이 일치해야한다.
print(array.sorted(by: { num1, num2 in
    num1 > num2
}))
//result : [100, 50, 40, 20, 1, -1]

//shorthand argument name - 축약 인자 이름을 사용하여 더 간단한 클로저를 정의 할 수 있다.
//매개변수에 대한 파라매터가 '$'로 이미 정의되어있다고 이해하면 쉽다.
print(array.sorted(by: { $0 > $1 }))
//result : [100, 50, 40, 20, 1, -1]

//Int 형은 less-than('<') 연산자를 제공하고, 연산 결과는 Bool을 반환하기 때문에 이를 이용하여 더 간단하게 클로저를 정의할 수 있다.
print(array.sorted(by: <))
//result : [-1, 1, 20, 40, 50, 100]

//trailing closures - 후행 클로저 문법을 사용하여 함수의 마지막 인자가 클로저일 경우 더 간단하고 깔끔한 클로저를 정의할 수 있다.
print(array.sorted { $0 < $1 })
//result : [-1, 1, 20, 40, 50, 100]


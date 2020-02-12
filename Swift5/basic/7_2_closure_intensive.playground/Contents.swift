import UIKit

//escaping 클로저
var completinHandlers: [() -> Void] = []

//함수의 인자로 전해진 클로저를 외부 변수에 저장하고 실행은 나중에 하게 된다. 이때 escaping을 꼭 명시해 주어야 한다.
func makeEscapingClosure(_ handler: @escaping () -> Void) {
    completinHandlers.append(handler)
}

makeEscapingClosure{
    print("I'm no.1")
}
makeEscapingClosure{
    print("I'm no.2")
}

completinHandlers[0]()
completinHandlers[1]()

//autoclosure 클로저 - 실제 사용되는 곳을 봐야지 이해하기 편할 것 같다 간단한 예제만 정리해 두자.
var customersInLine = ["주성민", "조승아", "조승빈", "주희정"]
func collectCustomerProviders(_ customerProvider: @autoclosure () -> String) {
    print("Now serving \(customerProvider())!")
}
collectCustomerProviders(customersInLine.remove(at: 0))

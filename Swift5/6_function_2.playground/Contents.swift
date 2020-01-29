import UIKit

//swift5의 중첩함수 사용 방법. 복잡하거나 긴 함수를 간단하게 정리할 수 있다.

func outFunc(_ value: Int) -> Int {
    print("outFunc함수에 진입했습니다.")
    
    func inFunc(_ inValue: Int) -> Int {
        print("inFunc함수에 진입했습니다.")
        return inValue + 1
    }
    
    return inFunc(value)
}

print(outFunc(30))
/*
 result :
 outFunc함수에 진입했습니다.
 inFunc함수에 진입했습니다.
 31
 */

//swift5의 함수는 일급객체라는 점을 이용하여 함수의 매개변수로 함수 자체를 넘겨주는 예제
func recievFunc(checkNum: Int, arguFunc: (Int) -> Bool) {
    if arguFunc(checkNum) {
        print("ok! fine!")
    } else {
        print("fail!")
    }
}

func isZero(num: Int) -> Bool {
    if num == 0 {
        return true
    } else {
        return false
    }
}

var num = 1
print("run \"recievFunc(checkNum: num, arguFunc: isZero)\"")
recievFunc(checkNum: num, arguFunc: isZero)
/*
 result :
 run "recievFunc(checkNum: num, arguFunc: isZero)"
 fail!
 */

num = 0
print("run \"recievFunc(checkNum: num, arguFunc: isZero)\"")
recievFunc(checkNum: num, arguFunc: isZero)
/*
result :
run "recievFunc(checkNum: num, arguFunc: isZero)"
ok! fine!
*/

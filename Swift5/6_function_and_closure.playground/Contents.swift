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

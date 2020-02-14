import UIKit

var firstValue = 0
var secondValue = 0
var thirdValue = 0

let multipleTestGloblaQueue = DispatchQueue.global()
let testGroup = DispatchGroup()

var startTime = CFAbsoluteTimeGetCurrent()

testGroup.enter()
multipleTestGloblaQueue.async {
    for _ in 0..<20000{
        firstValue += 3
    }
    testGroup.leave()
}

testGroup.enter()
multipleTestGloblaQueue.async {
    for _ in 0..<20000{
        secondValue += 3
    }
    testGroup.leave()
}

testGroup.enter()
multipleTestGloblaQueue.async {
    for _ in 0..<20000{
        thirdValue += 3
    }
    testGroup.leave()
}


testGroup.wait()


print(firstValue + secondValue + thirdValue)
print("sec : ", CFAbsoluteTimeGetCurrent() - startTime)
/*
 result :
 180000
 sec :  0.6510680913925171
 */

startTime = CFAbsoluteTimeGetCurrent()
var result = 0
for _ in 0..<60000 {
    result += 3
}
print(result)
print("sec : ", CFAbsoluteTimeGetCurrent() - startTime)
/*
 result :
 180000
 sec :  1.177327036857605
 */

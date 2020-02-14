import UIKit

//workItem Sample
let workItemQueue = DispatchQueue(label: "dispatchQueue")
let workItem = DispatchWorkItem {
    sleep(1)
    print("dispatch work item block finished")
}

workItemQueue.async(execute: workItem)
print("workItemQueue.async(execute: workItem)")

workItem.notify(queue: workItemQueue){
    guard !workItem.isCancelled else { return }
    print("workItem's notice")
}

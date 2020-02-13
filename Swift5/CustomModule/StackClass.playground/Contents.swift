import UIKit

protocol LinearDataStructure {
    associatedtype Item
    var volume: Int { get }
    var top: Item? { get }
    var bottom: Item? { get }
    var isEmty: Bool? { get }
}

protocol Findable {
    associatedtype Item: Equatable
    func contain(_ element: Item) -> Bool
    func index(_ element: Item) -> Int?
}


struct Stack<Element: Equatable> {
    var items = [Element]()
    var itemType = Element.self

    mutating func push(_ item: Element) {
        items.append(item)
    }

    mutating func pop() -> Element? {
        guard items.count != 0 else {
            //print("Stack is emty!!!")
            return nil
        }
        return items.removeLast()
    }
}

extension Stack: LinearDataStructure {
    typealias Item = Element

    var volume: Int {
        return items.count
    }

    var isEmty: Bool?  {
        if items.count == 0 { return true }
        return false
    }

    var top: Element? {
        return items.last
    }

    var bottom: Element? {
        return items.first
    }
}

extension Stack: Findable {
    func contain(_ element: Element) -> Bool {
        for item in items {
            if item == element { return true }
        }
        return false
    }

    //Find elements in reverse order.
    func index(_ element: Element) -> Int?  {
        for (idx, item) in items.reversed().enumerated() {
            if item == element { return volume - idx - 1 }
        }
        return nil
    }
}



//test code
var array = [Int]()
var stack = Stack(items: array)
let testElements = [6, 2, 3, 1, 4]

for element in testElements {
    stack.push(element)
}

assert(stack.isEmty == false)
assert(stack.volume == testElements.count)
assert(stack.top == testElements.last)
assert(stack.bottom == testElements.first)
assert(stack.index(testElements[0]) == 0)
assert(stack.contain(testElements[3]) == true)

for _ in 0..<5 {
    stack.pop()
}

assert(stack.isEmty == true)
assert(stack.volume == 0)
assert(stack.pop() == nil)
assert(stack.top == nil)

print("test success")

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Queue:
    def __init__(self):
        self.head = None
        self.tail = None

    def is_empty(self):
        if not self.head:
            return True

        return False

    def enqueue(self, data):
        new_node = Node(data)

        if self.is_empty():
            self.head = new_node
            self.tail = new_node
            return

        self.tail.next = new_node
        self.tail = new_node

    def dequeue(self):
        if self.is_empty():
            return None
        temp_node = self.head
        ret_data = temp_node.data
        self.head = temp_node.next
        del temp_node
        return ret_data

    def peek(self):
        if self.is_empty():
            return None

        return self.head.data

if __name__ == "__main__":
    q = Queue()

    print(q.is_empty()) # True

    q.enqueue(1)
    print("deleted data : {}".format(q.dequeue())) # deleted data : 1

    q.enqueue(2)
    q.enqueue(3)
    q.enqueue(4)
    q.enqueue(5)

    while not q.is_empty():
        print(q.dequeue()) # 2, 3, 4, 5
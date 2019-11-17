class node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Linked_list:
    def __init__(self):
        self.head = None
        self.tail = None

    def insert(self, node):
        if self.head == None:
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            self.tail = node

    def delete(self, data):
        if self.head == None:
            return False
        else :
            if self.head.data == data:
                self.head = self.head.next
                return True
            tmp_node = self.head

            while tmp_node.next != None:
                if tmp_node.next.data == data:
                    tmp_node.next = tmp_node.next.next
                    return True
                tmp_node = tmp_node.next
            return False

    def print_queue(self):
        if self.head == None:
            return print("emty_queue")
        arr = []
        tmp_node = self.head
        while 1:
            arr.append(tmp_node.data)
            if tmp_node.next != None:
                tmp_node = tmp_node.next
            else:
                break
        return print(arr)
if "__main__" == __name__:
    Lin_list = Linked_list()
    node1 = node(1)
    node2 = node(2)
    node3 = node(3)
    Lin_list.insert(node1)
    Lin_list.insert(node2)
    Lin_list.insert(node3)
    Lin_list.print_queue()
    Lin_list.delete(2)
    Lin_list.print_queue()
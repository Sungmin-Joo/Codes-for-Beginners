class Queue :
    def __init__ (self):
        self.stack_f = []
        self.stack_e = []

    def push_queue(self, data, option = 1):
        if option :
            self.stack_e.append(data)
        else:
            self.stack_f.append(data)

    def pop_queue(self):
        if self.stack_f: return self.stack_f.pop()
        if self.stack_e:
            self.move_stack(self.stack_f, self.stack_e)
            return self.pop_queue()
        return None

    def move_stack(self, dest, start):
        while start:
            self.push_queue(start.pop(), 0)

if __name__ == "__main__":
    A = Queue()
    print(A.pop_queue())
    A.push_queue(1)
    A.push_queue(2)
    A.push_queue(3)
    print(A.pop_queue())
    A.push_queue(4)
    A.push_queue(5)
    print(A.stack_f, A.stack_e)
    print(A.pop_queue())
    print(A.pop_queue())
    print(A.pop_queue())
    print(A.pop_queue())
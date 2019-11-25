class min_Heap :
    def get_left_child(self, idx):
        return idx * 2

    def get_right_child(self, idx):
        return idx * 2 + 1

    def get_parent(self, idx):
        return idx // 2

    def compare_val(self, val1, val2):
        if val1 < val2 : return -1
        elif val1 > val2 : return 1
        else : return 0

    def __init__ (self):
        self.arr = [None]
        self.num = 0

    def is_empty(self):
        if self.num == 0 : return True
        return False

    def insert(self, data):
        if self.is_empty():
            self.arr.append(data)
            self.num += 1
            return
        self.arr.append(data)
        self.num += 1

        idx_data = self.num

        while self.is_go_up(idx_data, data):
            parent_idx = self.get_parent(idx_data)
            self.arr[idx_data] = self.arr[parent_idx]

            idx_data = parent_idx

        self.arr[idx_data] = data

    def delete(self):
        if self.is_empty() :
            print("Empty!!")
            return None
        data = self.arr[1]
        last_data = self.arr[self.num]

        self.num -= 1
        idx_data = 1
        while self.is_go_down(idx_data, last_data):
            child_idx = self.which_is_prior_child(idx_data)
            self.arr[idx_data] = self.arr[child_idx]
            idx_data = child_idx
        self.arr[idx_data] = last_data
        self.arr.pop()
        return data

    def which_is_prior_child(self, idx):
        left_idx = self.get_left_child(idx)

        if left_idx > self.num:
            return None
        elif left_idx == self.num:
            return left_idx

        right_idx = self.get_right_child(idx)

        left_value = self.arr[left_idx]
        right_value = self.arr[right_idx]

        if self.compare_val(left_value, right_value) == -1:
            return left_idx
        else:
            return right_idx

    def is_go_down(self, idx, data):
        child_idx = self.which_is_prior_child(idx)

        if not child_idx:
            return False

        child_value = self.arr[child_idx]

        if self.compare_val(child_value, data) == -1:
            return True
        else:
            return False

    def is_go_up(self, idx, data):
        if idx <= 1:
            return False

        parent_value = self.arr[self.get_parent(idx)]

        if self.compare_val(parent_value, data) == 1: # 부모 우선순위가 작다면
            return True
        else:
            return False

if __name__ == "__main__":
    heap = min_Heap()
    heap.insert(3)
    heap.insert(5)
    heap.insert(1)
    heap.insert(10)
    heap.insert(8)
    heap.insert(7)
    heap.insert(4)
    heap.insert(5)
    heap.insert(2)
    heap.insert(6)
    heap.insert(9)
    for i in range(1, heap.num+1):
        print(heap.arr[i], end = '  ')
        # 1  2  3  5  6  7  4  10  5  8  9  

    print("\n")

    for i in range(1, heap.num+1):
        print(heap.delete(), end = '  ')       
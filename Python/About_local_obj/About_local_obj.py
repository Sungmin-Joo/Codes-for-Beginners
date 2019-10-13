class aaa:
    def __init__(self):
        print("__init__ 메서드 수행")

    def __del__(self):
        print("__del__ 메서드 수행")

def abc():
    #지역함수 안에서 할당한 메모리 공간은 지역을 벗어날 때 자동으로 해제된다!
    Obj1 = aaa()

if __name__ == "__main__":
    abc()
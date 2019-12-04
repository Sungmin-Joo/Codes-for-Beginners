package main

import "fmt"

type student struct {
	name  string
	age   int
	phone string
}

type test struct {
	num int
}

func callByreference(t *test) {
	t.num += 10
}

func callByvalue(t test) {
	t.num += 10
}

func main() {
	var stu1 = student{}
	fmt.Println(stu1)
	//구조체에 멤버변수가 0으로 초기화되어있지 않기 때문에 "{ 0 }"이 출력된다.

	stu1.name = "주성민"
	stu1.age = 25
	stu1.phone = "01027704367"
	fmt.Println(stu1)
	//구조체에 멤버변수들이 출력된다. "{주성민 25 01027704367}"

	stu2 := student{"홍길동", 25, "1234567891"}
	fmt.Println(stu2)
	//구조체의 멤버변수 순서대로 구조체 변수를 선언할 수 있음. "{홍길동 25 1234567891}"

	stu3 := student{age: 25, phone: "01023234444", name: "헐크"}
	fmt.Println(stu3)
	//구조체의 멤버변수의 변수명을 명시해주면 순서에 상관없이 멤버변수에 값을 저장 가능. "{헐크 25 01023234444}"

	//--------------------------- call by reference vs call by value --------------------------------------
	var t1 = test{}
	var t2 = new(test)
	//구조체 포인터를 선언하는 문법이다.

	t1.num = 10
	t2.num = 10

	fmt.Println(t1, " : ", t1.num)
	fmt.Println(t2, " : ", t2.num)

	callByvalue(t1)
	callByreference(t2)

	fmt.Println(t1, " : ", t1.num)
	fmt.Println(t2, " : ", t2.num)

	//t2는 구조체 포인터로 선언시 "new(구조체이름)"으로 선언한다.
	//한번 선언된 구조체 포인터는 참조 연산자 '*'을 사용할 필요가 없다.
	//함수 안에서 참조를 통해 값을 변경한 t2는 함수 내부에서 멤버 변수의 변화가 함수 외부에도 영향을 미친다.
}

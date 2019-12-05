package main

import "fmt"

type Square struct {
	width, height float32
}

//아래의 (source Square)은 어떤 구조체를 전달 받는지 명시하는 'receiver'이다.
func (source Square) SquArea() float32 {
	return source.width * source.height
}

//아래의 (source *Square)은 어떤 구조체를 전달 받는지 명시하는 'receiver'이다.
//위 함수는 Value Reveiver였다면 아래 함수는 Pointer Receiver이다.
func (source *Square) SquAreaRef() float32 {
	source.width += 1
	return source.width * source.height
}

func main() {
	var s1 = new(Square)
	//구조체 포인터를 선언하는 문법이다.

	s1.width = 10
	s1.height = 5

	//내부에서 값의 변화가 없는 메서드 이다.
	//호출 시 객체가 자동으로 매개변수로 들어간다고 생각하면 쉽다. (파이썬의 self)
	area := s1.SquArea()
	fmt.Println("사각형 구조체의 넓이 : ", area)

	//Value Receiver와 Pointer Receiver
	area = s1.SquAreaRef()
	fmt.Println("사각형 구조체의 넓이(참조 메서드 사용 시) : ", area)
	area = s1.SquAreaRef()
	fmt.Println("사각형 구조체의 넓이(참조 메서드 사용 시) : ", area)
	area = s1.SquAreaRef()
	fmt.Println("사각형 구조체의 넓이(참조 메서드 사용 시) : ", area)

	//참조 리시버를 사용했기 때문에 내부에서 객체의 필드 값을 변경 시키면 외부 객체에도 변경이 반영 된다.

}

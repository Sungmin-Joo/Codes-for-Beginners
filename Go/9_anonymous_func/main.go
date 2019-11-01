package main

import "fmt"

func main() {
	func() {
		fmt.Println("안녕하세요 익명함수입니다.")
	}()

	func(a int, b int) {
		fmt.Println(a, "와", b, "를 입력받은 무명 함수입니다.")
	}(3, 4)

	FuncName := func(a int, b int) int {
		fmt.Println("변수에 ", a, "와", b, "를 더해주는 익명함수를 대입했습니다.")
		return a + b
	}

	fmt.Println(FuncName(1, 2))
	fmt.Println(FuncName(3, 4))
}

package main

import "fmt"

func main() {
	//1
	fmt.Print("Hello world!")
	fmt.Println("Hello world!")
	fmt.Printf("Hello world!")

	fmt.Println()
	//2 - Print (like Python's print)
	num := 5
	fmt.Print(1, "\n")
	fmt.Print(num, "\n")
	fmt.Print(num, "hello", 1, "\n")

	//3 - Println (like Java's println)
	fmt.Println("주성민")
	fmt.Println("줄이 바뀐다.")
	fmt.Println(1234, "여러가지 자료형도 출력가능!")

	//4 - Printf (like C's printf)
	//var arr [3]int = [3]int{1, 2, 3}
	var arr = [3]int{1, 2, 3}
	fmt.Printf("%d <- 이 정수와 같이 문자열을 출력\n", 3)
	fmt.Printf("%v <- 배열도 그대로 출력\n", arr)

	fmt.Printf("%5d <- 출력시 공간 할당가능\n", 3)
	fmt.Printf("%05d <- 공간을 0으로 채우기도 가능\n", 3)

	fmt.Printf("%.3f <- 소숫점 반올림 가능\n", 3.141592)
	fmt.Printf("%10.3f <- 소수도 공간 할당 가능\n", 3.141592)

	fmt.Printf("왼쪽정렬 -> %-5d <- 가능\n", 3)
}

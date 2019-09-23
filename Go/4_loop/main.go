package main

import "fmt"

func main() {

	var number int
	var names [3]string = [3]string{"주성민", "주성민 여자친구", "주성민 친구"}
	fmt.Print("정수 한 개를 입력해 주세요 : ")
	fmt.Scanf("%d", &number)
	for i := 0; i < number; i++ {
		fmt.Printf("%d번 반복하는 반복문 입니다.\n", number)
	}

	num := 5
	for num > 0 {
		fmt.Print("5번 반복하는 for문 입니다.\n")
		num--
	}

	//for {
	//fmt.Print("무한루프입니다. ctrl + c로 종료시켜 주세요\n")
	//}

	for idx, name := range names {
		fmt.Printf("변수 %d번째 name의 값은 %s 입니다.\n", idx+1, name)
	}
}

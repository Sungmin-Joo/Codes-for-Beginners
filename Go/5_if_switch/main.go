package main

import "fmt"

func main() {
	/*
		    num := 10

			if val := num * 2; val == 20 {
				fmt.Println("val 은 20 이군요!")
			}


			switch val := num * 2; val {
			case 20:
				fmt.Println("val은 20 이군요!")
			default:
				fmt.Println("val은 20 이 아니군요!")
			}
	*/
	//1. switch 문에서 문자열도 다룰 수 있다.
	str := "apple"
	switch str {
	case "apple":
		fmt.Println("str은 apple 이군요!")
	default:
		fmt.Println("str은 apple 이 아니군요!")
	}
	//2. switch 문에서 case에 표현식을 사용할 수 있다.
	switch {
	case str == "apple":
		fmt.Println("str은 apple 이군요!")
	default:
		fmt.Println("str은 apple 이 아니군요!")
	}
}

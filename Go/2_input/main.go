package main

import "fmt"

func main() {
	var age int
	var name string

	//Scanf
	fmt.Print("이름과 나이를 띄어쓰기로 구분하여 입력 : ")
	fmt.Scanf("%s %d", &name, &age)
	fmt.Printf("이름 : %s\n나이 : %d\n", name, age)

	//Scan
	fmt.Print("이름과 나이를 띄어쓰기로 구분하여 입력 : ")
	fmt.Scan(&name, &age)
	fmt.Printf("이름 : %s\n나이 : %d\n", name, age)

	//Scanln
	fmt.Print("이름과 나이를 띄어쓰기로 구분하여 입력 : ")
	fmt.Scanln(&name, &age)
	fmt.Printf("이름 : %s\n나이 : %d\n", name, age)
}

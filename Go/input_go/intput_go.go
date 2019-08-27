package main

import "fmt"

func main() {
	var a, b, c, result int
	fmt.Scanln(&a, &b, &c)

	result = a*b + c
	fmt.Printf("%d x %d + %d = %d", a, b, c, result)
}

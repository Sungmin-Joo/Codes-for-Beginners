package main

import "fmt"

func main() {
	var arr [3]int
	fmt.Println(arr)
	arr = [3]int{1, 2, 3}
	fmt.Println(arr)

	var arr2 = [...]int{1, 2, 3, 4}
	fmt.Println(arr2)

	//nil slice 선언
	var sli []int
	fmt.Println(sli)

	sli = []int{1, 2, 3}
	fmt.Println(sli)
	sli = sli[1:3]
	fmt.Println(sli)

	sli_m := make([]int, 0, 5)
	sli_m = append(sli_m, 1)
	fmt.Println("sli_m의 요소 :", sli_m, "sli_m의 길이 :", len(sli_m), "sli_m의 용량 :", cap(sli_m))

	for i := 2; i <= 7; i++ {
		sli_m = append(sli_m, i)
		fmt.Println("sli_m의 요소 :", sli_m, "sli_m의 길이 :", len(sli_m), "sli_m의 용량 :", cap(sli_m))
	}

	sli1 := []int{1, 2}
	sli2 := []int{3, 4}
	sli3 := append(sli1, sli2...)
	fmt.Println(sli3)

	sli4 := make([]int, 0, 10)
	copy(sli4, sli3)
	fmt.Println(sli4)

	sli5 := make([]int, 10, 10)
	copy(sli5, sli3)
	fmt.Println(sli5)

	sli6 := sli5
	sli6[0] = 5
	fmt.Println(sli5)
	fmt.Println(sli6)
}

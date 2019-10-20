package main

import "fmt"

func bubbleSort(nums []int) {
	var temp int
	leng := len(nums)
	for i := 0; i < leng; i++ {
		for j := 0; j < leng-i-1; j++ {
			if nums[j] > nums[j+1] {
				temp = nums[j]
				nums[j] = nums[j+1]
				nums[j+1] = temp
			}
		}
	}
}

func inputNums() []int {
	var num int
	fmt.Scan(&num)

	var tmp_num int
	nums := make([]int, num, num)
	for i := 0; i < num; i++ {
		fmt.Scan(&tmp_num)
		nums[i] = tmp_num
	}
	return nums
}

func outputNums(nums []int) {
	for i := 0; i < len(nums); i++ {
		fmt.Print(nums[i], " ")
	}
}
func func_1() {
	fmt.Println("매개변수와 반환값이 없는 함수를 실행하였습니다.")
}

func func_2(a, b int) {
	fmt.Printf("매개변수 %d 와 %d 를 받은 함수를 실행하였습니다.\n", a, b)
}

func func_3(a, b int) (int, string) {
	fmt.Printf("매개변수 %d 와 %d 를 받고 int와 string을 리턴하는 함수를 실행하였습니다.\n", a, b)
	return 3, "문자열!"
}

func main() {
	func_1()
	func_2(2, 3)
	num, str := func_3(2, 3)
	fmt.Println(num, "과 '", str, "'을 반환 받았습니다.")

	nums := inputNums()
	bubbleSort(nums)
	outputNums(nums)
}

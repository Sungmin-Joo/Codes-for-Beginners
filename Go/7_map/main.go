package main

import "fmt"

func main() {
	var dict1 map[string]string

	if dict1 == nil {
		fmt.Println("this is nil map")
	}

	dict2 := map[string]string{
		"name":  "주성민",
		"age":   "25",
		"birth": "950906",
	}

	fmt.Printf("%s의 나이는 %s이고 생년월일은 %s 이다.\n", dict2["name"], dict2["age"], dict2["birth"])
	fmt.Printf("현재 dict2의 길이는 %d 이다.\n", len(dict2))
	fmt.Println(dict2)
	dict1 = dict2
	fmt.Println(dict1)

	var dict3 = make(map[int]string)
	dict3[1] = "일"
	dict3[5] = "오"
	fmt.Println(dict3)

	switch word, ok := dict3[1]; ok {
	case true:
		fmt.Printf("key에 해당하는 값은 %s 입니다.\n", word)
	default:
		fmt.Println("key에 해당하는 값이 없습니다.")
	}

	switch word, ok := dict3[10]; ok {
	case true:
		fmt.Printf("key에 해당하는 값은 %s 입니다.\n", word)
	default:
		fmt.Println("key에 해당하는 값이 없습니다.")
	}
}

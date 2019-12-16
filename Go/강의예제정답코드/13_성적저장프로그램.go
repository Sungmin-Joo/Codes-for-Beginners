package main

import "fmt"

type student struct {
	name string
	gender string
	score map[string]int
}

func newStudent(name, gender string) *student {
	return &student{name, gender, map[string]int{}}
}

func main() {
	var cnt int
	var cntSubject int
	var name string
	var gender string
	var subject string
	var score int

	fmt.Scanln(&cnt, &cntSubject)
	
	
	studentSlice := make([]*student, 0, 0)
	
	for i := 0; i < cnt; i++ {	
		fmt.Scanln(&name, &gender)
		studentSlice = append(studentSlice, newStudent(name, gender))

		for j := 0; j < cntSubject; j++ {
			fmt.Scanln(&subject, &score)

			studentSlice[i].score[subject] = score
		}
		
	}
	
	for i := 0; i < cnt; i++ {
		fmt.Println("----------")
		fmt.Println(studentSlice[i].name, studentSlice[i].gender)
		
		for index, val := range studentSlice[i].score {
			fmt.Println(index, val)
		}
		
	}
	fmt.Println("----------")
}
#include <iostream>
#include <string>

using namespace std;


struct Student
{
	char name[20];
	int  student_ID;
	char major[20];
	char grade;
};

int main()
{
	Student stu1;

	cout << "Input student_ID : ";
	cin >> stu1.student_ID;
	cout << "Input name: ";
	cin >> stu1.name;
	cout << "Input major: ";
	cin >> stu1.major;
	cout << "Input grade: ";
	cin >> stu1.grade;
	cout << endl;
	//Input data about student.

	cout << "-------------- Student information --------------" << endl;
	cout << "student_ID: " << stu1.student_ID << endl;
	cout << "name: " << stu1.name << endl;
	cout << "major: " << stu1.major << endl;
	cout << "grade: " << stu1.grade << endl;
	cout << "-------------------------------------------------" << endl;
	//Output data about student.
	
	return 0;
}
/*
Input student_ID : 2014146042
Input name: Sungmin_Joo
Input major: Embedded_Major
Input grade: A

-------------- Student information --------------
student_ID: 2014146042
name: Sungmin_Joo
major: Embedded_Major
grade: A
-------------------------------------------------
*/
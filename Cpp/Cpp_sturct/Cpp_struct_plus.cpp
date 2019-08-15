#include <iostream>
#include <string>

using namespace std;
int count = 0;
char name_arr[10][20] = { '\0', };

struct Student
{
	char name[20];
	int  student_ID;
	char major[20];
	char grade;
	
};

void Data_base(Student A)
{
	strcpy_s(::name_arr[::count],20, A.name);
}

void Input_menu(Student A)
{
	cout << "Input student_ID : ";
	cin >> A.student_ID;
	cout << "Input name: ";
	cin >> A.name;
	cout << "Input major: ";
	cin >> A.major;
	cout << "Input grade: ";
	cin >> A.grade;
	cout << endl;
	Data_base(A);
	::count++;
	//Input data about student.
}



void Output_stu_name()
{
	cout << "-------------- Student Name --------------" << endl;
	for (int i = 0; i < ::count; i++)
	{
		cout << i+1 << ". " << ::name_arr[i] << endl;
	}
	cout << "------------------------------------------" << endl;
}

void Output_all(Student temp_stu)
{
	cout << "-------------- Student information --------------" << endl;
	cout << "student_ID: " << temp_stu.student_ID << endl;
	cout << "name: " << temp_stu.name << endl;
	cout << "major: " << temp_stu.major << endl;
	cout << "grade: " << temp_stu.grade << endl;
	cout << "-------------------------------------------------" << endl;
}

int main()
{
	int num;
	Student std_1;
	Student std_2;

	//Input code start
	cout << "Input student_ID : ";
	cin >> std_1.student_ID;
	cout << "Input name: ";
	cin >> std_1.name;
	cout << "Input major: ";
	cin >> std_1.major;
	cout << "Input grade: ";
	cin >> std_1.grade;
	cout << endl;
	Data_base(std_1);
	::count++;
	cout << "Input student_ID : ";
	cin >> std_2.student_ID;
	cout << "Input name: ";
	cin >> std_2.name;
	cout << "Input major: ";
	cin >> std_2.major;
	cout << "Input grade: ";
	cin >> std_2.grade;
	cout << endl;
	Data_base(std_2);
	::count++;
	//Input code end

	while(1)
	{
		//Select menu. 1 - look name, 2 - look information. esle  - warnning
		cout << "----- Select menu -----" << endl << "1. Look student name\n2. Student information" <<endl;
		cin >> num;
		if (num == 1)
		{
			Output_stu_name();
		}
		else if (num == 2)
		{
			Output_all(std_1);
			Output_all(std_2);
		}
		else
		{
			cout << "Wrong number." << endl;
		}
	}
	return 0;
}
/*
---------------------------------------------------------------------------
Input student_ID : 2014146042
Input name: Sungmin_Joo
Input major: Embedded
Input grade: B

Input student_ID : 2014146041
Input name: Pretty_Jo
Input major: Embedded
Input grade: A

----- Select menu -----
1. Look student name
2. Student information
1
-------------- Student Name --------------
1. Sungmin_Joo
2. Pretty_Jo
------------------------------------------
----- Select menu -----
1. Look student name
2. Student information
2
-------------- Student information --------------
student_ID: 2014146042
name: Sungmin_Joo
major: Embedded
grade: B
-------------------------------------------------
-------------- Student information --------------
student_ID: 2014146041
name: Pretty_Jo
major: Embedded
grade: A
-------------------------------------------------
----- Select menu -----
1. Look student name
2. Student information
3
Wrong number.
'
'
'
---------------------------------------------------------------------------
*/

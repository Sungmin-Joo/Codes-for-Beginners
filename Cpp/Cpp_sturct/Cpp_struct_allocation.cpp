#include <iostream>
using namespace std;

struct student {
	int id;
	int score;
	char name[20];
};


char get_grade(int tmp);
void get_list(student tmp);


void main()
{
	student stu1 = { 1000,98,"Joo Seungmin" };
	student stu2 = { 1001,90,"Ah mugoto" };
	student stu3 = { 1002,85,"Kim Chigirl" };
	student stu4 = { 1003,100,"Jo Seungah" };
	student stu5 = { 1004,70,"Babo" };

	student *ptr = new student[5];
	*ptr = stu1;
	*(ptr + 1) = stu2;
	*(ptr + 2) = stu3;
	*(ptr + 3) = stu4;
	*(ptr + 4) = stu5;

	while (1)
	{
		cout << endl;
		cout << "---------- MENU ----------" << endl;
		cout << "- 1. Get grade_list.     -" << endl;
		cout << "- 2. Get id_list.        -" << endl;
		cout << "- 3. Logout.	         -" << endl;
		cout << "--------------------------" << endl;
		cout << "Select menu : ";
		
		char temp;
		cin >> temp;

		if (temp == '3')
			break;
		else if (temp == '1')
		{
			cout << endl;
			for (int i = 0; i < 5; i++)
			{ 
				cout << ptr[i].name << " get '" << get_grade(ptr[i].score) << "' grade" << endl;
			}
		}
		else if (temp == '2')
		{
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				get_list(ptr[i]);
			}
		}
		else
			cout << "Error : an incorrect number. " << endl << endl << endl;
	}
	cout << "Logout..." << endl;
	delete[] ptr;
}

char get_grade(int tmp) {
	if (tmp >= 90)
		return 'A';
	else if (tmp >= 80)
		return 'B';
	else if (tmp >= 70)
		return 'C';
	else
		return 'D';
}

void get_list(student tmp) {
	cout << tmp.id << " - " << tmp.name << endl;
}

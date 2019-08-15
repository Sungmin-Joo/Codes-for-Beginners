#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "This is my first C++ program!" << endl;
	
	int number;
	cout << "Size of int = " << sizeof(number) << " Byte" << endl;
	//Check size of int.
	string str;
	cout << "Size of string = " << sizeof(str) << " Byte" << endl;
	//Check size of string.
	cout << "Enter integer number : ";
	cin >> number;
	cout << "Enter string : ";
	cin >> str;
	
	cout << "--------------------" << endl << "Entered number is " << number << endl;
	//str = str + " ----str add test!----";
	cout << "Entered string is " << str << endl << "--------------------" << endl;
	
	return 0;
}
/*
---------- result ----------

This is my first C++ program!
Size of int = 4 Byte
Size of string = 28 Byte
Enter integer number : 12345
Enter string : Apple
--------------------
Entered number is 12345
Entered string is Apple
--------------------

----------------------------
*/
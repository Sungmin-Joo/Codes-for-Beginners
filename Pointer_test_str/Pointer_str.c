#include <stdio.h>

int main()
{
	char *A = "Hello";
	printf("%p\n", A);
	printf("%s\n", A);
}
//----------reulst----------
//00A56B30
//Hello
//--------------------------
//The above values ​​are different every time.
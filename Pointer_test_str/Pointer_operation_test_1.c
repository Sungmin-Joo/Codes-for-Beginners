#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	/*
	Pointer_operation_test!!
	I use "VS2015" compiler.
	This code may not be compiled in other compilers.
	If so, only check the results.
	*/
	char *ptr_char = NULL;
	int *ptr_int = NULL;
	double *ptr_double = NULL;
	char str_1[] = { 'A', 'P', 'P', 'L', 'E' };
	char str_2[] = {'A', 'P', 'P', 'L', 'E', '\0'};
	printf("- - - - - - - - - - - - - - - - - - -\n");
	printf("%p\n", ptr_char);
	printf("%p\n", ptr_char + 1);
	/*
	- - - - - - - - - - - - - - - - - - -
	00000000
	00000001
	- - - - - - - - - - - - - - - - - - -
	size of "char" is 1 byte,
	then result of "ptr_char + 1" is value of ptr_char + 1
	*/
	printf("- - - - - - - - - - - - - - - - - - -\n");
	printf("%p\n", ptr_int);
	printf("%p\n", ptr_int + 1);
	/*
	- - - - - - - - - - - - - - - - - - -
	00000000
	00000004
	- - - - - - - - - - - - - - - - - - -
	size of "int" is 4 byte,
	then result of "ptr_int + 1" is value of ptr_int + 4	
	*/
	printf("- - - - - - - - - - - - - - - - - - -\n");
	printf("%p\n", ptr_double);
	printf("%p\n", ptr_double + 1);
	/*
	- - - - - - - - - - - - - - - - - - -
	00000000
	00000008
	- - - - - - - - - - - - - - - - - - -
	size of "double" is 8 byte,
	then result of "ptr_double + 1" is value of ptr_double + 8 
	*/
	printf("- - - - - - - - - - - - - - - - - - -\n");
	printf("%d\n", strlen(str_1)); //point - A
	printf("%d\n", strlen(str_2));
	printf("- - - - - - - - - - - - - - - - - - -\n");
	/*
	- - - - - - - - - - - - - - - - - - -
	16
	5
	- - - - - - - - - - - - - - - - - - -
	The first result value may vary from computer to computer.
	Or can't compile.
	This is because of VS, a very smart compiler.
	When compile "point - A", compiler find the nearest '\0' and conduct strlen(str_1).
	Function "strlen" count the number of characters until '\0' appears.
	To sum up, the use of "strlen" in the wrong expression results in the wrong result.
	*/
	return 0;
}

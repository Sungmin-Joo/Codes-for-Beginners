#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *str = "APPLE";
	// => {'A','P','P','L','E','\0'}
	char *ptr_str;
	ptr_str = str;
	printf("ptr_str : %p\n      =\nstr : %p\n", ptr_str, str);
	/*
	ptr_str : 00ED7614
	=
	str : 00ED7614
	----------------------------------------
	*/
	printf("----------------------------------------\n");
	printf("Result of str[0] = '%c'\n", str[0]);
	printf("Result of *str = '%c'\n", *str);
	printf("Result of *ptr_str = '%c'\n", *ptr_str);
	/*
	----------------------------------------
	Result of str[0] = 'A'
	Result of *str = 'A'
	Result of *ptr_str = 'A'
	----------------------------------------
	The same result in different expressions
	*/
	printf("----------------------------------------\n");
	printf("Result of str[0]+1 = '%c'\n", str[0] + 1);
	printf("Result of *ptr_str+1 = '%c'\n", *ptr_str + 1);
	printf("Result of *(ptr_str + 1) = '%c'\n", *(ptr_str + 1));
	printf("----------------------------------------\n");
	/*
	----------------------------------------
	Result of str[0]+1 = 'B'
	Result of *ptr_str+1 = 'B'
	Result of *(ptr_str + 1) = 'P'
	----------------------------------------
	str[0] + 1 => 'A' + 1 => 'B'
	*ptr_str + 1 => 'A' + 1 => 'B'
	*(ptr_str + 1) => str[1] => 'P'
	*/
	return 0;
}
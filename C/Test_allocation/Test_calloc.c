#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int A[3], i;
	int *B,*C;
	srand(time(NULL)); i = rand();
	/*
	Use srand to initialize seed.
	"i = rand()" is not an essential code.
	But "i = rand()" do first "rand()", and next "rand()" comes more random values.
	Since the time (NULL) is used for "srand," the first "rand" value seems to be similar for each consecutive compilation.
	At least that's what I think.
	*/
	B = (int*)calloc (3, sizeof(int));
	C = (int*)malloc(sizeof(int) * 3);
	/*
	Allocate "B" as much memory space as size (int)*3 = 12Byte.
	Return type of malloc function must be changed to the data type to be used,
	because the defult return value is void pointer.
	The same applies to calloc.
	*/
	printf("---------- different malloc and calloc (initial value) ----------\n");
	for (i = 0; i < 3; i++)
	{
		printf("calloc's %dst data %d\n",i + 1, B[i]);
	}
	for (i = 0; i < 3; i++)
	{
		printf("malloc's %dst data %d\n",i + 1, C[i]);
	}
	printf("--------------- insert data to calloc --------------\n");
	/*
	Calloc and Malloc are different types of parameters, but the biggest difference is in initialization.
	When calloc carried out, calloc do not only memmory allocation but also initialize 
	*/
	for (i = 0; i < 3; i++)
	{
		A[i] = rand();
		printf("%d\n", A[i]);
	}
	printf("-----------------------------\n");
	for (i = 0; i < 3; i++)
	{
		B[i] = A[i];
		printf("%d\n", B[i]);
	}
	/*
	Because "B" has room for three int data,
	all elements of "A" can be put in place.
	*/
	free(B,C);
	//Initialize (disable) the memory allocated to B,C.
	return 0;
}
/*
---------------------------------------- result ------------------------------------------
---------- different malloc and calloc (initial value) ----------
calloc's 1st data 0
calloc's 2st data 0
calloc's 3st data 0
malloc's 1st data -842150451
malloc's 2st data -842150451
malloc's 3st data -842150451
--------------- insert data to calloc --------------
22932
4345
11887
-----------------------------
22932
4345
11887
-----------------------------------------------------------------------------------------
*/
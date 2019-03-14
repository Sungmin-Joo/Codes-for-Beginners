#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int A[3], i;
	int *B;
	srand(time(NULL)); i = rand();
	/*
	Use srand to initialize seed.
	"i = rand()" is not an essential code.
	But "i = rand()" do first "rand()", and next "rand()" comes more random values.
	Since the time (NULL) is used for "srand," the first "rand" value seems to be similar for each consecutive compilation.
	At least that's what I think.
	*/
	for (i = 0; i < 3; i++)
	{
		A[i] = rand();
		printf("%d\n", A[i]);
	}

	printf("--------------------\n");
	B = (int*)malloc(sizeof(int) * 3);
	/*
	Allocate "B" as much memory space as size (int)*3 = 12Byte.
	Return type of malloc function must be changed to the data type to be used,
	because the defult return value is void pointer.
	*/
	
	for (i = 0; i < 3; i++)
	{
		B[i] = A[i];
		printf("%d\n", B[i]);
	}
	/*
	Because "B" has room for three int data,
	all elements of "A" can be put in place.
	*/
	free(B);
	//Initialize (disable) the memory allocated to B.
	return 0;
}
/*
---------- result ----------
25144
6005
24320
--------------------
25144
6005
24320
----------------------------
*/
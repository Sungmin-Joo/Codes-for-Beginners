#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
	int* B;
	printf("------------------------------------------------------\n");
	B = (int*)malloc(sizeof(int) * 3);
	/*
	Allocate "B" as much memory space as size (int)*3 = 12Byte.
	Return type of malloc function must be changed to the data type to be used,
	because the defult return value is void pointer.
	*/
	*B = 3;
	printf("Size of 'B' before call realloc() : %d\n", _msize(B));
	printf("B's first value : %d\n",*B);
	//B's first value before call realloc()
	printf("Conduct %crealloc(B, sizeof(int) * 6)%c\n", 0x22, 0x22);
	realloc(B, sizeof(int) * 6);
	printf("Size of 'B' after call realloc() : %d\n", _msize(B));
	printf("B's first value : %d\n", *B);
	printf("B's second value : %d\n", *(B+1));
	//B's first,second value after call realloc()
	printf("------------------------------------------------------\n");
	
	free(B);
	//Initialize (disable) the memory allocated to B.


	//I applied the same conditions to calloc. 
	printf("------------------------------------------------------\n");
	B = (int*)calloc(3,sizeof(int));
	*B = 3;
	printf("Size of 'B' before call realloc() : %d\n", _msize(B));
	printf("B's first value : %d\n", *B);
	//B's first value before call realloc()
	printf("Conduct %crealloc(B, sizeof(int) * 6)%c\n", 0x22, 0x22);
	realloc(B, sizeof(int) * 6);
	printf("Size of 'B' after call realloc() : %d\n", _msize(B));
	printf("B's first value : %d\n", *B);
	printf("B's second value : %d\n", *(B+1));
	/*
	B's first value,second after call realloc()
	Unlike malloc, calloc initializes the value of the allocated memory to zero.
	Even if you reassign memory to the same function "realloc",
	Zero data of B initialized by calloc remains unchanged.
	*/
	printf("------------------------------------------------------\n");

	free(B);
	//Initialize (disable) the memory allocated to B.

	return 0;
}
/*
------------------------------------------------------
Size of 'B' before call realloc() : 12
B's first value : 3
Conduct "realloc(B, sizeof(int) * 6)"
Size of 'B' after call realloc() : 24
B's first value : 3
B's second value : -842150451
------------------------------------------------------
------------------------------------------------------
Size of 'B' before call realloc() : 12
B's first value : 3
Conduct "realloc(B, sizeof(int) * 6)"
Size of 'B' after call realloc() : 24
B's first value : 3
B's second value : 0
------------------------------------------------------
*/
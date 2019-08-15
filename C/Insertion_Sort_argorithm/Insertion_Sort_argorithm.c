#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//Insertion Sort
	int i, A[100], temp, index = (sizeof(A)/sizeof(int));
	srand(time(NULL)); i = rand();
	/*
	Use srand to initialize seed.
	"i = rand()" is not an essential code.
	But "i = rand()" do first "rand()", and next "rand()" comes more random values.
	Since the time (NULL) is used for "srand," the first "rand" value seems to be similar for each consecutive compilation.
	At least that's what I think.
	*/
	for (i = 0; i < 100; i++)
	{
		A[i] = rand();
	}
	//---------- Insertion Sort argorithm ----------
	for (i = 2; i < 100; i++)
	{
		int Key = A[i];
		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (A[j] < Key)
			{
				break;
			}
			else
			{
				A[j + 1] = A[j];
			}
		}
		A[j + 1] = Key;
		/*
		ex)
		-> 1-step
		[5] | [3][4][1]
		-> 2-step
		[3][5] | [4][1]
		-> 3-step
		[3][4][5] | [1]
		-> 4-step
		[1][3][4][5]
		*/
	}
	//-------------------- End ---------------------
	for (i = 0; i < index; i++)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%d ", A[i]);
	}

	return 0;
}
/*
---------- result ----------
43 202 299 620 1836 3010 3191 3502 3985 4061
4479 5011 5786 6612 7455 7706 8170 8175 8201 8906
9337 9427 9549 9898 10064 10341 10478 11046 11143 11249
11588 11908 11946 12137 12287 12586 12868 22955 12945 13050
14424 14865 15299 15512 15769 15769 15825 15971 16229 16272
17133 17865 17982 18068 18258 18295 18575 18838 18906 19507
19802 19838 19965 20156 20529 20560 20761 21071 21071 22399
23320 24024 24117 25198 25403 25940 26503 27038 27086 27101
27159 27176 27340 27669 27685 27896 27911 28425 29109 30706
31130 31154 31253 31477 31479 31740 31863 31968 32256 32576
----------------------------
*/
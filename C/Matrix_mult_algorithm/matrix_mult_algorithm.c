#include <stdio.h>

int main()
{
	//matrix_mult_algorithm
	int Result_mult[2][3] = { 0 };
	int A[2][4] = {{ 5,7,-3,4 }, { 2, -5, 3, 6 }};
	int B[4][3] = { 3,0,8,-5,1,-1,7,4,4,2,4,3};
	int row_A = sizeof(A) / sizeof(A[0]);
	//When looking for row_len in an array, divide the size of a row by the size of the element
	int col_B = sizeof(B[0]) / sizeof(int);
	int col_A = sizeof(A[0]) / sizeof(int), index, i, j;
	//When looking for col_len in an array, the entire space occupied by the array is divided into single line sizes.
	for (i = 0; i < row_A; i++)
	{
		for (j = 0; j < col_B; j++)
		{
			for (index = 0; index < col_A; index++)
			{
				Result_mult[i][j] = Result_mult[i][j] + (A[i][index] * B[index][j]);
			}
			printf("%d ", Result_mult[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
/*
---------- result ----------
-33 11 33
64 31 51
----------------------------
*/
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
//Syntax to prevent "scanf" errors
#include <stdio.h>
char switch_decimal_to_notation(int A)
{
	switch (A)
	{
	case 15:
		return 'F';
		break;
	case 14:
		return 'E';
		break;
	case 13:
		return 'D';
		break;
	case 12:
		return 'C';
		break;
	case 11:
		return 'B';
		break;
	case 10:
		return 'A';
		break;
	default :
		return '0' + A;
		break;
	}
}

void decimal_to_N_notatation(int A,int N)
{
	int remainder = A, quotient,index = 0;
	char temp[20];
	while (remainder > N - 1)
	{
		quotient = remainder% N;
		remainder /= N;
		temp[index++] = switch_decimal_to_notation(quotient);
		//Mapping the remaining values with the switch syntax defined above.
	}
	temp[index] = switch_decimal_to_notation(remainder);
	for (index; index >= 0; index--)
	{
		printf("%c", temp[index]);
		//The values in the array are printed in reverse order.
	}
	printf("\n");
}

int main()
{
	int decimal_number,notation;
	printf("Enter the decimal number :");
	scanf("%d", &decimal_number);
	printf("Enter the N-notation (maximum 16) :");
	scanf("%d", &notation);
	decimal_to_N_notatation(decimal_number, notation);
	return 0;
}
/*
---------------result----------------
Enter the decimal number :1019091
Enter the N-notation (maximum 16) :16
F8CD3
---------------result----------------
*/
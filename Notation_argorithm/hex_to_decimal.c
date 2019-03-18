#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
//Syntax to prevent "scanf" errors
#include <stdio.h>
#include <math.h>

int hex_to_deciaml(char A)
{
	switch (A)
	{
	case 'F':
		return 15;
		break;
	case 'E':
		return 14;
		break;
	case 'D':
		return 13;
		break;
	case 'C':
		return 12;
		break;
	case 'B':
		return 11;
		break;
	case 'A':
		return 10;
		break;
	default :
		return A - 48;
		break;
	//"A - 48" means "N - 48". if cha A = '3', then "A - 48" is "51 - 48". 
	}
}

int main()
{
	int decimal = 0;
	char hex[20] = { 0 };

	printf("Enter the hex number :");
	gets(hex);

	int val = strlen(hex) - 1;
	for (int i = val; i >= 0; i--)
	{
		decimal += (hex_to_deciaml(hex[i]) * pow(16.0, val - i));
		//The process of converting from hex to decimal.
	}

	printf("---------------result----------------\n");
	printf("%d\n", decimal);
	printf("-------------------------------------\n");

	return 0;
}
/*
Enter the hex number :F8CD3
---------------result----------------
1019091
-------------------------------------
*/
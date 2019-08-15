#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char input[100] = { 0 };
	char *ptr;
	int i,j, temp = 0, dec = 0;
	int quotient = 0, remainder = 0;
	printf("Input hex num : ");
	gets(input);

	i = strlen(input);
	ptr = input;

	while (i--)
	{
		if (*ptr > 0x40 && *ptr < 0x47)
			temp = *ptr - 55;
		else if (*ptr > 0x60 && *ptr < 0x67)
			temp = *ptr - 87;
		else if (*ptr >= 0x30 && *ptr <= 0x39)
			temp = *ptr - 48;
		else
		{
			printf("Wrong hex num\n");
			dec = 0;
			break;
		}
		dec += temp*pow(16, i);
		ptr++;
		if (i == 0)
		{
			printf("decimal : ");
			printf("%d\n", dec);
		}
	}
	/*
	********************************************************************************************
	*¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è		hex to decimal		    ¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è¡è*
	*																						   *
	*						Change the notation without the arrangement						   *
	*																						   *
	*¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é		decimal to hex			¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é¡é*
	********************************************************************************************

	*/
	printf("Input hex num : ");
	gets(input);

	i = strlen(input);
	ptr = input;
	dec = 0;
	while (i--)
	{
		if (*ptr >= 0x30 && *ptr <= 0x39)
			temp = *ptr - 48;
		else
		{
			printf("Wrong hex num\n");
			dec = 0;
			break;
		}
		quotient += temp*pow(10, i);
		ptr++;
		if (i == 0)
		{
			for (j = strlen(input) - 1; j >= 0; j--)
			{
				remainder = quotient % 16;
				quotient = quotient / 16;
				if (remainder > 9)
					input[j] = remainder + 55;
				else
					input[j] = remainder + 48;
			}
			printf("hex : ");
			for (j = 0; j <= strlen(input); j++)
				putchar(input[j]);
		}
	}
	return 0;
}
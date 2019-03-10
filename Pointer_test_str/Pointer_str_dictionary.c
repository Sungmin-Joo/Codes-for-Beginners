#include <stdio.h>
#include <string.h>
void Switch_array(char *str1,char *str2)
{
	char temp;
	int max;
	if (strlen(str1) < strlen(str2))
	{
		max = strlen(str2);
	}
	else
	{
		max = strlen(str1);
	}
	for (int i = 0; i < max; i++)
	{
		temp = str1[i];
		str1[i] = str2[i];
		str2[i] = temp;
	}
}
/*
The above function switches two strings.
You can enter a string into an array,
but you receive a string in a different way for pointer practice.
*/
int main()
{
	char str[100];
	char compare[5][20] = { 0, };//Initialize Array
	char *ptr;
	int i, j, count;
	printf("Enter 5 strings separated by spacing. : ");
	gets(str);
	//This code can be entered in both upper and lower case characters.
	ptr = str; 
	count = 0;
	i = 0;
	//Outputs the entered string with a pointer
	printf("\n--------------------\n", *ptr);
	while (1)
	{
		if (*ptr == ' ') //Outputs an opening character when the current pointer indicates a space in the charactor.
		{
			printf("\n");
			count++;
			i = 0;
		}
		else if (*ptr == NULL)//Breaks the while statement when the current pointer points to NULL.
		{
			printf("\n--------------------\n", *ptr);
			break;
		}
		else
		{
			compare[count][i] = *ptr;
			i++;
			printf("%c", *ptr);
		}
		ptr++;
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			char temp_i, temp_j;
			temp_i = compare[i][0];
			temp_j = compare[j][0];
			if (temp_i >= 65 && temp_i <= 90)
			{
				temp_i += 32;
			}
			if (temp_j >= 65 && temp_j <= 90)
			{
				temp_j += 32;
			}
			if (temp_i > temp_j)
			{
				Switch_array(compare[i], compare[j]);
				j = i;
			}
		}
	}
	printf("Output in dictionary order.\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", compare[i]);
	}
	return 0;
}
/*
----------reulst----------
Enter 5 strings separated by spacing. : English apple korea Zeta Man
--------------------
English
apple
korea
Zeta
Man
--------------------
Output in dictionary order.
apple
English
korea
Man
Zeta
--------------------------
The above values ​​are different every time.
*/
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
//The above function switches two strings.

int main()
{
	char str[100];
	char compare[5][20] = { 0, }; //Initialize Array
	char *ptr;
	int i, j, count;
	printf("Enter 5 strings separated by spacing. : ");
	gets(str);
	ptr = str; 
	count = 0;
	i = 0;
	//Outputs the entered string with a pointer
	printf("\n--------------------\n");
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
			printf("\n--------------------\n");
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
			if (strlen(compare[i]) > strlen(compare[j]))
			{
				Switch_array(compare[i],compare[j]);
				j = i;
			}
		}
	}

	printf("Output in length order. (Results of the sort)\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", compare[i]);
	}
	return 0;
}
//----------reulst----------
//Enter 5 strings separated by spacing. : eeeee a dddd ccc bb
//--------------------
//eeeee
//a
//dddd
//ccc
//bb
//--------------------
//Output in length order. (Results of the sort).
//a
//bb
//ccc
//dddd
//eeeee
//--------------------------
//The above values ​​are different every time.
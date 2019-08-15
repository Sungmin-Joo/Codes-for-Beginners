#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30],str2[30];
	char *ptr1,*ptr2;

	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	ptr1 = str1;
	ptr2 = str2;
	printf("----------result----------\n");
	if (strlen(str1) != strlen(str2))
	{
		printf("It's a different string.\n");
		//Compare the length of the two strings to determine
		//that they are different if they do not match.
	}
	else
	{
		while (1)
		{
			if (*ptr1 >= 0x41 && *ptr1 <= 0x5A)
			{
				*ptr1 += 0x20;
			}
			if (*ptr2 >= 0x41 && *ptr2 <= 0x5A)
			{
				*ptr2 += 0x20;
			}
			if (*ptr1 != *ptr2)
			{
				printf("It's a different string.\n");
				break;
			}
			else if (*ptr1 == NULL || *ptr2 == NULL)
			{
				printf("It's a same string.\n");
				break;
			}
			//Algorithm that compares two strings by one character.
			ptr1++;
			ptr2++;
		}
	}

	printf("---------- end -----------\n");
	return 0;
}
/*
---------------reulst---------------
# 1 - case

Enter first string: AbcD
Enter second string: aBCd
----------result----------
It's a same string.
---------- end -----------
# 2 - case

Enter first string: abcd
Enter second string: abcde
----------result----------
It's a different string.
---------- end -----------
------------------------------------
*/

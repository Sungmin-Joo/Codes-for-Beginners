#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	char *ptr;
	printf("Enter string : ");
	gets(str);
	ptr = str;
	printf("---------start-----------\nEntered str : %s\n", str);
	while (1)
	{
		if (*ptr >= 0x41 && *ptr <= 0x5A)
		{
			*ptr += 0x20;
		}
		else if (*ptr >= 0x61 && *ptr <= 0x7A)
		{
			*ptr -= 0x20;
		}
		else if (*ptr == NULL)
		{
			printf("Result : %s\n--------- end -----------\n", str);
			break;
		}
		//Algorithm to convert uppercase to lowercase and lowercase to uppercase.
		ptr++;
	}
	return 0;
}
/*
---------------reulst---------------
Enter string : AppLE
---------start-----------
Entered str : AppLE
Result : aPPle
--------- end -----------
------------------------------------
*/

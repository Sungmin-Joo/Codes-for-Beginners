#include <stdio.h>
#include <string.h>
int main() {
	char *ptr, *str;
	int n;

	printf("Enter the length of the string you want to enter. : ");
	scanf("%d", &n);
	str = (char*)calloc(n + 1, sizeof(char));
	
	printf("Enter a string to print backwards. : ");
	scanf("%s", str);

	printf("-------------output----------------\n");
	ptr = str + strlen(str);
	while(*ptr-- != str[0])
		printf("%c", *ptr);
	printf("\n");
	printf("-----------------------------------\n");

	return 0;
}
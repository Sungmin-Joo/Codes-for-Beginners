#include <stdio.h>

int main()
{
	int A;
	A = printf("ABCDEFG\n");
	printf("%d <-  length of the code above. \n",A);
	return 0;
}
//----------reulst----------
//ABCDEFG
//8 <-length of the str above.
//--------------------------
//The printf not only prints out the string, but also returns the length of the string that is output.
//So, "A = printf("ABCDEFG\n")" can successfully compile.
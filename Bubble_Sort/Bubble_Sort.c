#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, A[100], temp, index = (sizeof(A)/sizeof(int));
	srand(time(NULL)); i = rand();
	/*
	Use srand to initialize seed.
	"i = rand()" is not an essential code.
	But "i = rand()" do first "rand()", and next "rand()" comes more random values.
	Since the time (NULL) is used for "srand," the first "rand" value seems to be similar for each consecutive compilation.
	At least that's what I think.
	*/
	for (i = 0; i < 100; i++)
	{
		A[i] = rand();
	}
	//After above code, "i" value is 100. so, initialize "i" again.
	i = 0;
	do {
		int j = 0;
		do {
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j+1] = temp;
			}
			j++;
		} while(j < index-1  - i);
		i++;
	} while (i < index-1);
	
	for (i = 0; i < index; i++)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%d ", A[i]);
	}

	return 0;
}
/*
---------- result ----------
528 870 882 916 1129 1225 1842 2371 2473 3259
3982 4196 4792 5013 5252 5381 5583 5989 6160 6492
6932 7232 7233 7839 7879 8474 8610 9073 9564 9797
10870 11164 11181 11239 11325 11635 11687 12245 13168 13237
14245 14901 14947 15153 15826 16045 16437 17716 18470 18675
19394 20102 20438 20505 20798 20815 21221 21674 21969 22302
22417 22504 22528 22565 22814 22891 22941 23172 23318 23757
24445 25611 25719 25848 26029 26250 26332 26716 26993 27011
27011 27303 27851 28121 28152 28394 28564 28833 28912 29029
29436 29679 29885 30389 31120 31301 31709 31877 32163 32514
----------------------------
*/
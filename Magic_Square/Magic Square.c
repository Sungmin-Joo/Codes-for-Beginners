#include <stdio.h>

int main()
{
	//Magic Square
	int Magic_Square[5][5] = { 0 };
	int Row = 0, Column = 2, Next_row, Next_column;
	int i;
	for (i = 1; i <= 25; i++)
	{
		Magic_Square[Row][Column] = i;
		if (Row == 0)
		{
			Next_row = 4;
		}
		else
		{
			Next_row = Row - 1;
		}
		if (Column >= 4)
		{
			Next_column = 0;
		}
		else
		{
			Next_column = Column + 1;
		}

		if (Magic_Square[Next_row][Next_column] != 0)
		{
			Row += 1;
		}
		else
		{
			Row = Next_row;
			Column = Next_column;
		}
	}
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4; j++)
		{
			printf("%d ", Magic_Square[i][j]);
		}
		printf("\n");
	}
}
/*
---------- result ----------
17 24 1 8 15
23 5 7 14 16
4 6 13 20 22
10 12 19 21 3
11 18 25 2 9
----------------------------
*/
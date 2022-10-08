#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if ((i == 0) || (j == 0) || (j == 11) || (i == 2))
				printf("+");
			else
				printf(" ");

		}
		printf("\n");
	}
	system("pause");
	return 0;
}
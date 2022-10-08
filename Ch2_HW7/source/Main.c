#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");

		printf("\n");
	}

	printf("(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
			printf("*");

		printf("\n");
	}

	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i - 1; j++)
			printf(" ");
		for (j = 0; j < 10 - i; j++)
			printf("*");

		printf("\n");
	}
	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i + 1; j--)
			printf(" ");
		for (j = 0; j < i + 1; j++)
			printf("*");

		printf("\n");
	}

	system("pause");
	return 0;
}
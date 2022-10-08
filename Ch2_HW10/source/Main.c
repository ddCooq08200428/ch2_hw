#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 5;

	//¤W¥b¼h
	for (int i = 0; i < n; i++)               
	{                                         
		for (int j = 0; j < (n - 1) - i; j++)   							      
			printf(" ");
		for (int j = 0; j < (2 * i + 1); j++) 									                                  
			printf("*");

		printf("\n");
	}

	//¤U¥b¼h
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf(" ");
		for (int j = 0; j < 2 * (n - 1) - (1 + 2 * i); j++)
			printf("*");                    

		printf("\n");
	}
	system("pause");
	return 0;
}
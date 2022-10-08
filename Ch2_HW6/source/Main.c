#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float rate = 10, total = 5000;

	for (int i = 1; i < 16; i++)
	{
		total = total + total * (rate/100);
		rate += 0.5;
		printf("%.2f\n", total);
	}
	system("pause");
	return 0;
}
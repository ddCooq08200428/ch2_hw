#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales,salary;

	printf("Enter sales in dollar (-1 to end): ");
	scanf("%f", &sales);

	while (sales != -1)
	{
		salary = sales * 0.09 + 200;
		printf("Salary is: $%.2f\n", salary);
		printf("\nEnter sales in dollar (-1 to end): ");
		scanf("%f", &sales);
	}
	system("pause");
	return 0;
}
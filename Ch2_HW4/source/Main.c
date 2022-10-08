#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hours;
	float rate, salary;

	while (1)
	{
		printf("Enter # of hours worked(-1 to end): ");
		scanf("%d", &hours);
		
		if (hours == -1)
			break;
		else
		{
			printf("Enter hourly rate of the worker ($00.00): ");
			scanf("%f", &rate);
			if (hours > 40)
				salary = 400 + (hours - 40) * rate* 1.5;
			else
				salary = hours * 10;
			printf("Salary is $%.2f\n\n", salary);
		}
	}
	system("pause");
	return 0;
}
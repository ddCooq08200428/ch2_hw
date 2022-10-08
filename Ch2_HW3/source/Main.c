#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int days;
	float principal, rate,interest;

	
	
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		if (principal == -1)
			break;
		else
		{
			printf("Enter interest rate:  ");
			scanf("%f", &rate);
			printf("Enter term of the loan in day: ");
			scanf("%d", &days);
			interest = principal * rate * days / 365;
			printf("The interest charge is $%.2f\n\n", interest);
		}
	}

	system("pause");
	return 0;
}
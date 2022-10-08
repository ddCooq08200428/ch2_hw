#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int act_num = 0;
	float ttl_chg;
	float beg_bal;
	float new_bal;
	float ttl_credits;
	float credit_limit;

	printf("Enter account number (-1 to end): ");
	scanf("%d", &act_num);

	while (act_num != -1)
	{
		printf("Enter Beginning Balance: ");
		scanf("%f", &beg_bal);
		printf("Enter Total Charges: ");
		scanf("%f", &ttl_chg);
		printf("Enter Total Credits: ");
		scanf("%f", &ttl_credits);
		printf("Enter Credit Limit: $");
		scanf("%f", &credit_limit);
	
		new_bal = beg_bal + ttl_chg - ttl_credits;

		if (new_bal > credit_limit)
		{
			printf("Account:     %d\n", act_num); 
			printf("Credit Limit:%.2f\n", credit_limit);
			printf("Balance:     %.2f\n", new_bal);
			printf("Credit limit Exceeded.\n");
		}
		printf("\nEnter account number (-1 to end): ");
		scanf("%d", &act_num);
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num;
float total, weekpay, hour, hourwage, hr_total, weeksales, com_total, item_mon, pw_total, item_amount;
float num_1(), num_2(), num_3(), num_4();

int main(void)
{
	while (1)
	{
		printf("input the number of employee(don't repeat input 1 to 4  and -1 to end): ");
		scanf("%d", &num);
		if (num == -1 || num > 4)
			break;
		else
		{
			switch (num)
			{
				case 1:
					num_1();
					break;
				case 2:
					num_2();
					break;
				case 3:
					num_3();
					break;
				default:
					num_4();
					break;
			}
		}
	}
	total = weekpay + hr_total + com_total + pw_total;
	printf("company pay: %.3f\n", total);
	
	system("pause");
	return 0;
}

float num_1() {
	printf("pay for managers\n");
	printf("input the weekly salary: ");
	scanf("%f", &weekpay);
	return weekpay;
}
float num_2() {
	printf("pay for hourly workers\n");
	printf("input the hourly wage: ");
	scanf("%f", &hourwage);
	printf("input the work time: ");
	scanf("%f", &hour);
	if (hour > 40)
		hr_total = 40 * hourwage + (hour - 40) * hourwage * 1.5;
	else
		hr_total = hour * hourwage;
	return hr_total;
}
float num_3() {
	printf("pay for commission workers\n");
	printf("input the weekly sales: ");
	scanf("%f", &weeksales);
	com_total = 250 + weeksales * 0.057;
	return com_total;
}
float num_4() {
	printf("pay for pieceworkers\n");
	printf("input the each of the item money(only one type of item): ");
	scanf("%f", &item_mon);
	printf("input the  amount of items produced: ");
	scanf("%f", &item_amount);
	pw_total = item_amount * item_mon;
	return pw_total;
}

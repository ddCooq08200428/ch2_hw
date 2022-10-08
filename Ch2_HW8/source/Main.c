#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int a = 1; a <= 500; a++)
    {
        for (int b = 1; b <= 500; b++)
        {
            for (int c = 1; c <= 500; c++)
            {
                if ((a * a) + (b * b) == c * c && c <= 500)
                {
                    printf(" 對邊= %d,鄰邊 = %d,斜邊 = %d\n", a, b, c);
                }
            }
        }
    }

	system("pause");
	return 0;
}
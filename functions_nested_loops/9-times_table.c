#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description:
 * Prints the multiplication table of 9 from 0 to 9,
 * formatted with commas and spaces, numbers aligned properly.
 */

void times_table(void)
{
	int num1, num2, outcome;

	num1 = 0;
	num2 = 0;

	while (num1 <= 9)
	{
		num2 = 0;

		while (num2 <= 9)
		{
			outcome = num1 * num2;
			if (num2 == 0)
			{
				printf("%d", outcome);
				num2++;
			} else
			{
				printf(", %2d", outcome);
				num2++;
			}
		}
		printf("\n");
		num1++;
	}
}

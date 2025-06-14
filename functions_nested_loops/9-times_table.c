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

	while (num1 <= 9)
	{
		num2 = 0;

		while (num2 <= 9)
		{
			outcome = num1 * num2;
			if (num2 == 0)
			{
				_putchar('0' + outcome / 10);
			} else
			{
				_putchar(',');
				_putchar(' ');
				if (outcome < 10)
				{
					_putchar(' ');
					_putchar('0' + outcome);
				}
				else
				{
					_putchar('0' + (outcome / 10));
					_putchar('0' + (outcome % 10));
				}
			}
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}

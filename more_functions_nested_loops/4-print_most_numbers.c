#include "main.h"

/**
 * print_most_numbers - prints all numbers except 2 and 4 between 0 - 9.
 *
 * Description: This function uses _putchar to print digits from 0 to 9,
 * skipping 2 and 4, followed by a newline.
 */

void print_most_numbers(void)
{
	char i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}

		_putchar('0' + i);
		i++;
	}

	_putchar('\n');
}

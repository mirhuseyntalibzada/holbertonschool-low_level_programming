#include "main.h"

/**
 * print_numbers - prints digits from 0 - 9 to the console
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}

	_putchar('\n');
}

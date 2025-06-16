#include "main.h"

/**
 * print_line - prints line in the terminal n times
 *
 * @n: number of times to print the "_".
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}

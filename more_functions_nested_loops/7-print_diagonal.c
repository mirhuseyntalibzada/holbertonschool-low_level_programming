#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the termianl
 *
 * @n: number of times the character \ going to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}

}

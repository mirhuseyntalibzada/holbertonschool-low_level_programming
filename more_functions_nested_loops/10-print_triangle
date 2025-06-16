#include "main.h"

/**
 * print_triangle - prints triagle in the console
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, k, j;

	i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (i < size)
	{
		j = size;

		while (j - i - 1 > 0)
		{
			_putchar(' ');
			j--;
		}

		k = 0;

		while (k <= i)
		{
			_putchar('#');
			k++;
		}

		i++;
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char c, i;

	c = 'a';
	i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		c = 'a';
		_putchar('\n');
		i++;
	}
}

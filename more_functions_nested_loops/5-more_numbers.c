#include "main.h"

/**
 * more_numbers - prints numbers between 0 - 14.
 */

void more_numbers(void)
{
	char t = 0, i;

	while (t < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar('0' + (i / 10));
			}

			_putchar('0' + (i % 10));
			i++;
		}

		_putchar('\n');
		t++;
	}
}

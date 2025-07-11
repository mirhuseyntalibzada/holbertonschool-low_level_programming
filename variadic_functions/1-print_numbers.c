#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by a separator string.
 * @separator: string to print between numbers.
 * @n: number of arguments passed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

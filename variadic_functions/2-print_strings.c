#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings separated by a separator.
 * @separator: string to print between strings.
 * @n: number of arguments passed.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		va_end(args);
		return;
	}

	i = 0;
	while (i < n)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

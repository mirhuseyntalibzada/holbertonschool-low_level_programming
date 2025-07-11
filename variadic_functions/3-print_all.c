#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Supported format chars:
 *  c: char
 *  i: int
 *  f: float
 *  s: char * (NULL prints "(nil)")
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			separator = ", ";
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			separator = ", ";
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			separator = ", ";
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", separator, str);
			separator = ", ";
			break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}


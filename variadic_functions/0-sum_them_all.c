#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments passed to the function.
 * @...: variable number of unsigned int arguments to sum.
 *
 * Return: the sum of all the arguments, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	i = 0;
	sum = 0;

	while (i < n)
	{
		sum += va_arg(args, unsigned int);
		i++;
	}

	va_end(args);

	return (sum);
}

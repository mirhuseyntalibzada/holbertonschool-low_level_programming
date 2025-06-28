#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to compute the factorial of
 *
 * Description: Uses recursion to compute the factorial of a positive
 * integer. If n is lower than 0, the function returns -1 to indicate an error.
 *
 * Return: The factorial of n, or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

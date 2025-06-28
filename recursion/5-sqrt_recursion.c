#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to compute the square root of
 *
 * Description: This function recursively finds the natural square root
 * of a non-negative integer. If the number does not have a natural square
 * root, the function returns -1.
 *
 * Return: The natural square root of n, or -1 if no natural square root exists
 */

int _sqrt_recursion(int n)
{
	int sqrt = 1;

	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	if (sqrt * sqrt > n)
	{
		return (-1);
	}

	return (sqrt + _sqrt_recursion(n - 1));
}

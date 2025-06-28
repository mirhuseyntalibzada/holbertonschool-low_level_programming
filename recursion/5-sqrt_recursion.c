#include "main.h"

/**
 * find_sqrt - Recursively tries to find the natural square root of a number
 * @n: The number to find the square root of
 * @x: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if none exists
 */
int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}


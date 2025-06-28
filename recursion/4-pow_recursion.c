#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base integer
 * @y: The exponent
 *
 * Description: This function recursively computes the power of a number.
 * If y is lower than 0, the function returns -1 to indicate an error.
 *
 * Return: The result of x raised to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

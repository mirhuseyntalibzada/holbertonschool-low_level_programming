#include "main.h"

/**
 * _isdigit - checks if c is digit
 *
 * @c: number
 *
 * Return: returns 1 if the given variable is digit, if not returns 0.
 */

int _isdigit(int c)
{
	if (c >= '0' & c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

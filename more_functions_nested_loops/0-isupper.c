#include "main.h"

/**
 * _isupper - checks if the character is upper or not.
 *
 * @c: character
 *
 * Return: returns 1 if upper, 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

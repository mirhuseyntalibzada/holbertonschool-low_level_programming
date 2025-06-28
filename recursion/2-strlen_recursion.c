#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: Pointer to the string whose length is to be measured
 *
 * Description: This function recursively counts and returns the number
 * of characters in a string, excluding the null terminator.
 *
 * Return: The length of the string as an integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

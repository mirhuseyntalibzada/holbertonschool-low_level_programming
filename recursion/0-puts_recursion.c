#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line, using recursion
 * @s: Pointer to the string to be printed
 *
 * Description: This function prints each character of the string
 * recursively until the null terminator is encountered. After the last
 * character, it prints a newline character.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

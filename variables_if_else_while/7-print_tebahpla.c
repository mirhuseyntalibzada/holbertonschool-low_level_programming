#include <stdio.h>

/**
 * main - prints all lowercase alphabet from z-a
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ascii_code;

	ascii_code = 122;

	while (ascii_code > 96)
	{
		putchar(ascii_code);
		ascii_code--;
	}

	putchar('\n');

	return (0);
}

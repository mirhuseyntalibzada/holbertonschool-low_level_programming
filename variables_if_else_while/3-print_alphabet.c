#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabet with newline
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ascii_code;

	ascii_code = 97;

	while (ascii_code < 123)
	{
		putchar(ascii_code);
		ascii_code++;
	}

	ascii_code = 65;

	while (ascii_code < 91)
	{
		putchar(ascii_code);
		ascii_code++;
	}

	putchar('\n');

	return (0);
}

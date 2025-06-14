#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ascii_code;

	ascii_code = 48;

	while (ascii_code < 58)
	{
		putchar(ascii_code);
		ascii_code++;
	}

	ascii_code = 97;

	while (ascii_code < 103)
	{
		putchar(ascii_code);
		ascii_code++;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - print all lowercase letters to the console
 *
 * Return: 0
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
	putchar('\n');
	return (0);
}

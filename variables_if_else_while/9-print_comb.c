#include <stdio.h>

/**
 * main - prints number from 0-9 with comma and space.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int ascii_code;

	ascii_code = 48;

	while (ascii_code < 58)
	{
		putchar(ascii_code);
		if (ascii_code == 57)
		{
			ascii_code++;
			break;
		}

		putchar(44);
		putchar(32);
		ascii_code++;
	}

	putchar('\n');

	return (0);
}

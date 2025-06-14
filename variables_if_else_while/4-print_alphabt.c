#include <stdio.h>

/**
* main - prints all lowercase alphabet except 'e' and 'q'
*
* Return: 0 (success)
*/

int main(void)
{
	char ascii_code;

	ascii_code = 97;

	while (ascii_code < 123)
	{
		if (ascii_code == 'e' || ascii_code == 'q')
		{
			ascii_code++;
			continue;
		}

		putchar(ascii_code);
		ascii_code++;
	}

	putchar('\n');

	return (0);
}

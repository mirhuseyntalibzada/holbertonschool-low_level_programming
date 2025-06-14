#include <stdio.h>

/**
* main - prints all digits with putchar function
*
* Return: 0 (success)
*/

int main(void)
{
	int number;

	number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}

	putchar('\n');

	return (0);
}

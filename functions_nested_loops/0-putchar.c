#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}

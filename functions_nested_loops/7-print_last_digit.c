#include "main.h"

/**
 * print_last_digit - prints last digit of given number
 *
 * @n: number
 *
 * Return: last digit of given number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}

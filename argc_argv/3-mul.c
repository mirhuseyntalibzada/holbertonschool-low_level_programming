#include "main.h"
#include <stdio.h>

/**
 * _str_to_int - Converts a string to an integer (supports negative numbers)
 * @s: The string to convert
 *
 * Return: The converted integer, or 2147483647 if invalid (to trigger error)
 *
 */

int _str_to_int(char *s)
{
	int j, number, sign;

	j = 0;
	number = 0;
	sign = 1;

	if (s[j] == '-')
	{
		sign = -1;
		j++;
	}

	while (s[j] != '\0')
	{
		if (s[j] < '0' || s[j] > '9')
		{
			return (2147483647);
		}

		number = number * 10 + (s[j] - '0');
		j++;
	}

	number *= sign;
	return (number);
}

/**
 * main - Multiplies two integers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char **argv)
{
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = 1;
	result = 1;

	while (i < argc)
	{
		result *= _str_to_int(argv[i]);
		i++;
	}

	printf("%d\n", result);
	return (0);
}

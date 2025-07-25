#include "main.h"
#include <stdio.h>

/**
 * main - Adds positive numbers passed via command-line arguments.
 *        - If no numbers are provided, prints 0.
 *        - If any argument contains non-digit characters, prints "Error"
 *          and returns 1.
 *        - Otherwise, prints the sum of all valid positive numbers.
 *
 * @argc: The number of command-line arguments
 * @argv: The array of argument strings
 *
 * Return: 0 on success, 1 if a non-digit symbol is found in the input
 */

int main(int argc, char **argv)
{
	int i, j, number, sum;

	i = 1;
	sum = 0;

	while (i < argc)
	{
		j = 0;
		number = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

			number = (number * 10) + (argv[i][j] - '0');
			j++;
		}
		sum += number;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

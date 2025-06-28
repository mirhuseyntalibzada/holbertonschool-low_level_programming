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
	int i, j;
	int sum = 0;

	i = 1;

	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + argv[i][j] - '0';
			j++;
		}
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

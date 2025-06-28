#include "main.h"
#include <stdio.h>

/**
 * main - Multiplies two positive integers passed as command-line arguments
 *        and prints the result followed by a new line.
 *        If the number of arguments is not exactly 2, prints "Error".
 * @argc: Argument count
 * @argv: Array of strings representing command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char **argv)
{
	int num1, num2, i;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = 0;
	num1 = 0;
	while (argv[1][i] != '\0')
	{
		num1 = (num1 * 10) + (argv[1][i] - '0');
		i++;
	}

	i = 0;
	num2 = 0;
	while (argv[2][i] != '\0')
	{
		num2 = (num2 * 10) + (argv[2][i] - '0');
		i++;
	}

	printf("%d\n", num1 * num2);
	return (0);
}

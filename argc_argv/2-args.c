#include "main.h"

/**
 * main - Prints all the arguments passed to the program, each on a new line
 * @argc: The number of command line arguments
 * @args: An array of strings representing the arguments
 *
 * Description: Loops through each argument and prints it character by
 * character using _putchar, followed by a newline.
 *
 * Return: success
 */

int main(int argc, char **args)
{
	int i, j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (args[i][j] != '\0')
		{
			_putchar(args[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}

	return (0);
}

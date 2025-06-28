#include "main.h"

/**
 * main - Prints the program name followed by a new line
 * @argc: Argument count (unused)
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;
	
	(void)argc;

	i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

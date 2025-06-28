#include "main.h"

/**
 * main - Prints the number of arguments passed to the program
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the arguments (unused)
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argv;

	_putchar('0' + (argc - 1));
	_putchar('\n');
	return (0);
}

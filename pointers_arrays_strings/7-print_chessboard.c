#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Pointer to a 2D array containing the chessboard characters
 *
 * Description: This function prints an 8x8 chessboard represented
 * as a 2D array of characters.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);

			if (j == 7)
			{
				_putchar('\n');
				j++;
			}

			j++;
		}

		i++;
	}
}

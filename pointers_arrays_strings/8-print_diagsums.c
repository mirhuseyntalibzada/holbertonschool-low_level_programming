#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix
 * @a: Pointer to the first element of the matrix (square matrix)
 * @size: Size (number of rows/columns) of the matrix
 *
 * Description: This function calculates and prints the sum of the
 * two diagonals of a square matrix of integers.
 */

void print_diagsums(int *a, int size)
{
	int sum_of_first_diag = 0;
	int sum_of_second_diag = 0;
	int i;

	i = 0;
	while (i < size)
	{
		sum_of_first_diag += a[(size + 1) * i];
		sum_of_second_diag += a[(size - 1) * (i + 1)];
		i++;
	}

	printf("%d, %d\n", sum_of_first_diag, sum_of_second_diag);
}

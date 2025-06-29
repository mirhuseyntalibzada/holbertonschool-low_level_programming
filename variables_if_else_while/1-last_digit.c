#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - finds the last digit of random number and checks
 * if it greater than 5, less than 6 or equal to 0
 *
 * Return: 0
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else if (last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	} else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	return (0);
}

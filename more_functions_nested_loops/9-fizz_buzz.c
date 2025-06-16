#include <stdio.h>

/**
 * main - prints fizz buzz between 0 - 100
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}

		i++;
	}

	printf("\n");

	return (0);
}

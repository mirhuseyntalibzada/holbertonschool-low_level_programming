#include <stdio.h>

/**
* main - prints all digits
*
* Return: 0 (success)
*/

int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");

	return (0);
}

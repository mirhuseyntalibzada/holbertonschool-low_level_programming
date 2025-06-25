#include "main.h"

int _atoi(char *s)
{
	int number, sign, index, inside_of_digit;

	index = 0;
	number = 0;
	sign = 1;
	inside_of_digit = 0;
	
	while (s[index] != '\0')
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}
		else if (s[index] >= '0' && s[index] <= '9')
		{
			inside_of_digit = 1;
			number = (number * 10) + (s[index] - '0');
		}
		else if (inside_of_digit)
		{
			break;
		}
		index++;
	}

	return (sign * number);
}

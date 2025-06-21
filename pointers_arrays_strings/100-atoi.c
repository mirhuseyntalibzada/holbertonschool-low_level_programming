#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer, or 0 if no digits found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			if (result > (2147483647 - (s[i] - '0')) / 10)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
		{
			break;
		}
		i++;
	}

	return (sign * result);
}

#include "main.h"

/**
 * _strspn - return the length of the initial substring of the string pointed
 * to by str1 that is made up of only those character contained in the string
 * pointed to by str2
 *
 * @s: string to be scanned.
 *
 * @accept: string containing the characters to match.
 *
 * Return: the length of the characters.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int length = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				length++;
			}

			j++;
		}

		if (!found)
		{
			break;
		}

		i++;
	}

	return (length);
}

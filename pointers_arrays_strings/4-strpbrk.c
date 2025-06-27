#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - This function finds the first character in the string s1 that
 * matches any character specified in s2
 *
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: It returns a pointer to the character in s1 that
 * matches one of the characters in s2, else returns NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = NULL;
	int i, j;
	char found = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				p = &s[i];
			}
			j++;
		}
		if (found)
		{
			break;
		}

		i++;
	}

	return (p);
}

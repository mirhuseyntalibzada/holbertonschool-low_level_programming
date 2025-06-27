#include "main.h"
#include <stddef.h>

/**
 * _strstr - returns the location of substring in a given string.
 *
 * @haystack: the string which is used to locate the occurance of substring.
 * @needle: string to be found in haystack
 *
 * Return: pointer to the substring. If not found NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char found = 0;
	char *p = NULL;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				found = 1;
				j++;
			}
			else
			{
				found = 0;
				break;
			}
		}
		if (found)
		{
			p = &haystack[i];
		}

		i++;
	}

	return (p);
}

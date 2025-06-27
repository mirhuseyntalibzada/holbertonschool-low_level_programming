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

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}

#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates the character in string
 *
 * @s: string
 *
 * @c: character to be found in string
 *
 * Return: char pointer. If not found NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		i++;
	}

	if (c == '\0')
	{
		return (&s[i]);
	}

	return (NULL);
}

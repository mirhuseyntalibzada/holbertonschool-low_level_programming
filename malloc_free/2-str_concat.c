#include "main.h"
#include <stdlib.h>

/**
 * _length - Calculates the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string (number of characters before the null
 * terminator).
 */

int _length(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * str_concat - Concatenates two strings into a newly allocated space in
 * memory.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: Pointer to the newly allocated string containing s1 followed by s2,
 *         and null terminated. Returns NULL on failure.
 *         If s1 or s2 is NULL, treat it as an empty string.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	int length1, length2, i;

	length1 = _length(s1);
	length2 = _length(s2);

	concatStr = malloc((length1 + length2) * sizeof(char));

	if (concatStr == NULL)
		return (NULL);

	i = 0;

	while (i < length1)
	{
		concatStr[i] = s1[i];
		i++;
	}

	i = 0;

	while (i < length2)
	{
		concatStr[i + length1] = s2[i];
		i++;
	}

	concatStr[length1 + length2] = '\0';

	return (concatStr);
}

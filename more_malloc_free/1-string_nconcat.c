#include "main.h"
#include <stdlib.h>

/**
 * _length - Calculates the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string (number of characters before the null
 * terminator).
 */

unsigned int _length(char *str)
{
	unsigned int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 to concatenate.
 *
 * Return: Pointer to the newly allocated memory containing s1,
 *         followed by the first n bytes of s2, and null terminated.
 *         If the function fails, it returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length1, length2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = _length(s1);
	length2 = n;

	if (n < length2)
		length2 = _length(s2);

	concat = malloc((length2 + length1 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	i = 0;

	while (i < length1)
	{
		concat[i] = s1[i];
		i++;
	}

	i = 0;

	while (i < length2)
	{
		concat[length1 + i] = s2[i];
		i++;
	}

	concat[length1 + length2] = '\0';

	return (concat);

}

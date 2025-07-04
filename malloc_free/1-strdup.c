#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 *         NULL if str is NULL or if insufficient memory was available.
 *
 * Description: This function allocates memory using malloc.
 *              The returned string must be freed by the caller.
 */

char *_strdup(char *str)
{
	char *dup;
	int length, i;

	if (str[0] == '\0')
	{
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length == 0)
		return (NULL);

	dup = malloc(length * sizeof(char));

	if (dup == NULL)
		return (NULL);

	i = 0;

	while (i < length)
	{
		dup[i] = str[i];
		i++;
	}

	dup[length] = '\0';

	return (dup);
}

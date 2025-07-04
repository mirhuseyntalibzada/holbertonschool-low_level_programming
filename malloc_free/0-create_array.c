#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific
 * char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if size is 0 or malloc fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}

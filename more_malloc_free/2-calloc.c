#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc and initializes it to
 * zero.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, returns NULL.
 *         If malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}

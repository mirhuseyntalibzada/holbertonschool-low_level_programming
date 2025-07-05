#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing values from min
 * to max.
 * @min: Minimum value (inclusive).
 * @max: Maximum value (inclusive).
 *
 * Return: Pointer to the newly created array.
 *         If min > max, returns NULL.
 *         If malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < max - min + 1)
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);
}

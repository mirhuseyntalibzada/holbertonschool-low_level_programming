#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search through
 * @size: The number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: The index of the first element for which cmp does not return 0.
 * If no element matches or if size <= 0, returns -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}

	return (-1);
}

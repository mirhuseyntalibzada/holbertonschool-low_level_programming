#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to iterate over
 * @size: The number of elements in the array
 * @action: Pointer to the function to be applied to each element
 *
 * Description: This function applies the given function to each element
 * of the array. If array or action is NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}


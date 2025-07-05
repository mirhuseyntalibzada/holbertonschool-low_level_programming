#include "main.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog_t struct
 * @d: pointer to the dog_t struct to free
 *
 * Description: Frees the memory for name, owner,
 * and the dog struct itself.
 * Does nothing if d is NULL.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog (string to be copied)
 * @age: age of the dog
 * @owner: owner of the dog (string to be copied)
 *
 * Description: Allocates memory for a new dog_t structure,
 * duplicates the name and owner strings, and sets the age.
 * Returns NULL if memory allocation fails.
 *
 * Return: Pointer to the new dog_t structure, or NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = strdup(name);

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = strdup(owner);

	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->age = age;

	return (doggy);
}

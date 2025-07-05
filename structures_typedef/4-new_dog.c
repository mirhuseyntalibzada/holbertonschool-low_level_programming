#include <stdlib.h>
#include "dog.h"

/**
 * _length - returns length of a string
 * @s: string
 * Return: length
 */

int _length(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog_t, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *new_name, *new_owner;

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	new_name = malloc(_length(name) + 1);

	if (new_name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	_strcpy(new_name, name);

	new_owner = malloc(_length(owner) + 1);

	if (new_owner == NULL)
	{
		free(new_name);
		free(doggy);
		return (NULL);
	}

	_strcpy(new_owner, owner);

	doggy->name = new_name;
	doggy->owner = new_owner;
	doggy->age = age;

	return (doggy);
}


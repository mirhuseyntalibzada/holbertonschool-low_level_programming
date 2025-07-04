#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the details of a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: If d is NULL, this function does nothing.
 * If any member is NULL, it prints (nil) instead.
 * Prints the name, age, and owner of the dog.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}

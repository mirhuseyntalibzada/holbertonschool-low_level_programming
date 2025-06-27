#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: destination memory area
 * @source: source memory area
 * @n: size
 *
 * Return: pointer to the value of char
 */

char *_memcpy(char *dest, char *source, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = source[i];
	}

	return (dest);
}

#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by
 * s with the constant byte b
 *
 * @s: pointer to the char values.
 * @b: value which is going to be changed with values of s pointer.
 * n: number of times
 *
 * Return: pointer to the value of char.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

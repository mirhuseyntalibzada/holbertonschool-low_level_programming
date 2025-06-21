#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy characters from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Pad the remaining space with '\0' */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

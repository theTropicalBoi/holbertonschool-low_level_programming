#include "main.h"
/**
 * _memcpy - Copies a string.
 * @dest: Place where to copy the string.
 * @src: Place from where to get the string to copy.
 * @n: Number of characters to copy.
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

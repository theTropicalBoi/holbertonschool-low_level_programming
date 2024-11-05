#include "main.h"
/**
 * _strncpy - Copies a string.
 * @dest: Place where to copy the string.
 * @src: Place from where to get the string to copy.
 * @n: Number of bytes to copy
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strcpy - Copies a string.
 * @dest: Copy to
 * @src: Copy from
 * Return: Dest
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

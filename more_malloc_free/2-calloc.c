#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Array of nmemb element
 * @size: bytes
 * Return: NULL on fail.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *str;
	unsigned int total = 0;
	unsigned int i = 0;

	if ((nmemb == 0) || (size == 0))
	return (NULL);

	total = nmemb * size;

	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	str = (unsigned char *)ptr;
	for (i = 0; i < total; i++)
	{
		str[i] = 0;
	}
	return (ptr);
}

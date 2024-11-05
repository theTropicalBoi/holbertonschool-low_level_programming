#include "main.h"
/**
 * _strncat - Function that concatenates two strings.
 * @src: Premiere chaine de caractere.
 * @dest: Deuxieme Chaine de caractere.
 * @n: Limitation of the number of bytes used by src
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

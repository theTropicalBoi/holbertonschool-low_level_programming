#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Dunction that concatenates two strings
 * @s1: str 1
 * @s2: str 2
 * @n: first n bytes
 * Return: NULL if fail.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	char *str;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i] != '\0')
	i++;

	while (s2[j] != '\0')
	j++;

	if (n >= j)
	n = j;

	str = malloc(sizeof(char) * (i + n + 1));

	if (str == NULL)
	return (NULL);

	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}

	for (k = 0; k < n; k++)
	{
		str[i + k] = s2[k];
	}

	str[i + n] = '\0';
	return (str);
}

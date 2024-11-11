#include "main.h"
#include <stdio.h>
/**
 * _strchr - Look for a character in a string.
 * @s: The string to search in.
 * @c: The character to find.
 * Return: pointer to the first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

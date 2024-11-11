#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: String to search in
 * @needle: Substring to search for
 * Return: Pointer to beginning of substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}

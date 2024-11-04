#include "main.h"
/**
 * _strcat - Function that concatenates two strings.
 * @src: Character to copy from
 * @dest: Copy to
 * Return: Dest
 */
char *_strcat(char *dest, char *src)
{
/*
* I Need to concatenates two string together for example:
"Hello " and "World" would give me "Hello World"
The string I need two bring together are given by src one by one.
And I need to add them after the null bytes "\0".
*/
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

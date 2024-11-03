#include "main.h"
/**
 * _strlen - Get the lenght of a string
 * @s: variable of the string.
 * Return: Return the lenght of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

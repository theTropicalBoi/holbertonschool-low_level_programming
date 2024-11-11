#include "main.h"
/**
 * _strlen_recursion - Gets the length of a string with recursion
 * @s: String to get the length of
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

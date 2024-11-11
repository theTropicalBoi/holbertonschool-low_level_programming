#include "main.h"
/**
 * _strlen_recursion - Gets the length of a string with recursion.
 * @s: String to get the length of.
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

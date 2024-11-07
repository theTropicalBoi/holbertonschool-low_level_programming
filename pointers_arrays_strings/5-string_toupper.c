#include "main.h"
/**
 * string_toupper - Change all lowercase to uppercase in a string.
 * @s: The string to change.
 * Return: The string with all lowercase letters changed to uppercase.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}

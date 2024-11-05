#include "main.h"
/**
 * _strcmp - Function thatompares two strings.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 * Return: 0 if the same, - if s1<s2, + if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}

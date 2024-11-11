#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: The string to count.
 * @accept: The set of characters to count. "f" in main
 * Return: Number of bytes in the initial segment of "s".
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found; /* Check if the character is in the set*/

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			return (count);
		}
		count++;
	}

	return (count);
}

#include "main.h"
/**
 * rev_string - Function that reverse a string
 * @s: The string that need to be reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	i = 0;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;

		i++; /*incremente i */
		j--; /* Decremente j */
	}
}

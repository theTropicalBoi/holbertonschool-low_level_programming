#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The string who need to be converted
 * Return: The interger of the string or 0 if no numbers
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 1;
	unsigned int k = 0;

	while (s[i] == ' ')
		i++;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			k = k * 10 + (s[i] - '0');
		}
		else if (k > 0)
		break;
		i++;
	}

	return (k * j);
}

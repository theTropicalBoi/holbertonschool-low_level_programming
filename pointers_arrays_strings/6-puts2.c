#include "main.h"
/**
* puts2 - Function that print every 2 character of a string.
* @str: The string from which to print the character.
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

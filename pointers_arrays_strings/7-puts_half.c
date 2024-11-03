#include "main.h"
/**
* puts_half - Function that swaps the values of two integers.
* @str: The string to be printed
*/
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	j = (i - 1) / 2 + 1;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

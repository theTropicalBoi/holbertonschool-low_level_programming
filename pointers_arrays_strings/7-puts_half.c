#include "main.h"
/** 
* puts_half - Function that swaps the values of two integers.

*/
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i - 1 / 2;
	i = i / 2;

	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_rev - Print a string in reverse.
 * @s: The string to print.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}

	_putchar('\n');
}

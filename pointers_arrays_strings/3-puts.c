#include "main.h"
/**
 * _puts - Print a string.
 * @str: The string to print.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

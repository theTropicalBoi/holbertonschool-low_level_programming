#include "main.h"
/**
 * _puts_recursion - Prints a string with recursion
 * @s: String to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	if (*s == '\0')
		_putchar('\n');
}

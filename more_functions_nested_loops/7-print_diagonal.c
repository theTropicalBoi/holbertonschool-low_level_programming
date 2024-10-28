#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of time the "\" need to be printed.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar(' ');
			n--;
		}
		_putchar('\\');
	}
	_putchar('\n');
}

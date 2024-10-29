#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of time the "\" need to be printed.
 */
void print_diagonal(int n)
{
	int space, line;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

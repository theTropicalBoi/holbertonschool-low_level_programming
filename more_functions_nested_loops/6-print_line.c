#include "main.h"
/**
 * print_line - Print straight line in terminal.
 * @n: Number of time "_" need ot be printed.
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i != n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_square - Prints a square.
 * @size: the size of the square
 */
void print_square(int size)
{
	int x;
	int y = size;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (y-- > 0) /* y = the height of the square*/
		{
			x = size;
			while (x-- > 0) /* y = the height of the square*/
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

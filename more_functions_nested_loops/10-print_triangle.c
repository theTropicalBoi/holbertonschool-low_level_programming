#include "main.h"
/**
 * print_triangle - Prints a triangle.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int space, line;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (line = 1; line <= size; line++)
		{
			for (space = size; space >= 1; space--)
			{
				if (line < space)
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}

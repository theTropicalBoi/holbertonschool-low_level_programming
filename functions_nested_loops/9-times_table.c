#include "main.h"
/**
 * times_table - print the times 9 times table.
 */
void times_table(void)
{
	int y, x, number;

	for (y = 0; y <= 9; y++)
	{
		_putchar('0');
		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			number = y * x;

			if (number <= 9)
				_putchar(' ');
			else
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}

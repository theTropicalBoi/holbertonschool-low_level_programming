#include "main.h"
/**
 * more_numbers - Function to print 10 times from 0 to 14.
 */
void more_numbers(void)
{
	int list;
	int numbers;

	for (list = 0; list < 10; list++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + '0');
			}
			_putchar((numbers % 10) + '0');
		}
	_putchar('\n');
	}
}

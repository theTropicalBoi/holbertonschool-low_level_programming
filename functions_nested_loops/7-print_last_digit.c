#include "main.h"
/**
 * print_last_digit - Print the last digit of a number.
 * @r: The number given.
 * Return: The last digit stored in the variable i.
 */
int print_last_digit(int r)
{
	int i = r % 10;

	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i);
	return (i);
}

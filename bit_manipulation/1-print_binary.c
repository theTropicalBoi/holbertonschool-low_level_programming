#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be convert in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned int result = 0;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			_putchar('1');
			result = 1;
		}
		else if (result)
		{
			_putchar('0');
		}
	}
}

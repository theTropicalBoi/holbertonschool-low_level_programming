#include "main.h"
/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 * Return: prints every minute of the day
 */
void jack_bauer(void)
{
	int hrs;
	int min;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}

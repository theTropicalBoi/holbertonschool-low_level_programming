#include "main.h"
/**
 * print_alphabet_x10 - Function send to "2-main.c"
 *
 * Description: Print 10 time the alphabet
 * Return: Directly on the "2-main.c"
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

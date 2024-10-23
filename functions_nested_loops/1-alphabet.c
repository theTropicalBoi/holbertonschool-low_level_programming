#include "main.h"
/**
 * print_alphabet - Function send to Entry Point.
 *
 * Description: Prints the alphabet in lowercase witht he created _putchar.
 * Return: 0 if succeed.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

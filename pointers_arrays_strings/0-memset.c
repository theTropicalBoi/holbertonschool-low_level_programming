#include "main.h"
/**
 * memset - Function that fills the memory with a constant bytes
 * @n: Quantity to fill.
 * @b: The constant byte used to fill the memory.
 * @s: Size of memory.
 * Return: Return "s".
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

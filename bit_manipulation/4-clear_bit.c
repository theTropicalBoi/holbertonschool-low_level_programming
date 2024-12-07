#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointing to the number.
 * @index: starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index >= sizeof(n) * 8)
	return (-1);

	clear = 1UL << index;

	*n &= ~clear;

	return (1);
}

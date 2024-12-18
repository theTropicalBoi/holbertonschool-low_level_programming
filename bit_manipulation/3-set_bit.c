#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointing to the number.
 * @index: starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_value;

	if (index >= sizeof(n) * 8)
		return (-1);

	set_value = 1UL << index;

	*n |= set_value;

	return (1);
}

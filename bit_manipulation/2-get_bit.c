#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Pointing to the number.
 * @index: starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int set_value;

	if (index >= sizeof(n) * 8)
		return (-1);

	set_value = 1UL << index;

	if (n & set_value)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * flip_bits - n bits needed to be flip to get to another number.
 * @n: The number
 * @m: The number to be flipped.
 * Return: n of bits or -1 if failed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fliping = n ^ m;
	unsigned int count = 0;

	while (fliping > 0)
	{
		count += (fliping & 1);
		fliping >>= 1;
	}
	return (count);
}

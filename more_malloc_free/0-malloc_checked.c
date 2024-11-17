#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Dunction that allocates memory
 * @b: int for memory
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

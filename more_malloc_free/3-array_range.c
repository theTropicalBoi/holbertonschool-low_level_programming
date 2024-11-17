#include <stdlib.h>
#include "main.h"
/**
 * array_range - Dunction that creates an array of int
 * @min: Min value
 * @max: Max value
 * Return: NULL if min superior to max; the pointer to the new created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = min + i;

	return (array);
}

#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: Pointer to the square matrix
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
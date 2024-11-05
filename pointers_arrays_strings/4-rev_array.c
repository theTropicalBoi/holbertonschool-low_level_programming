#include "main.h"
/**
 * reverse_array - Reverse the array "a"
 * @a: Pointer to the array of integer.
 * @n: The number of elements to swap.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

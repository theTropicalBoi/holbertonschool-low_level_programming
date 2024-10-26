#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Function print n to 98.
 * @n: The number to start the print from.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d ,", n);
		}
	} else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d ,", n);
		}
	} else
	{
		printf("98");
	}
	printf("\n");
}

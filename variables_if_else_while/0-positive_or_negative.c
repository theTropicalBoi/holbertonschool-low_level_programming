#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print whether the variable n is positive or negative.
 * Return: Always 0 if Success.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n < 0)
	{
	printf("%d is negative\n", (int)sizeof(n));
	}

else if (n == 0)
	{
	printf("%d is zero\n", (int)sizeof(n));
	}

else
	{
	printf("%d is positive\n", (int)sizeof(n));
	}
return (0);
}

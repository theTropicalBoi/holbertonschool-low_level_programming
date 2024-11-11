#include "main.h"
/**
 * factorial - Calculates the factorial of a number with recursion
 * @n: Number to calculate the factorial of
 * Return: Factorial of the number
 */
int factorial(int n)
{
	if (n < 0) /* Check if the number is negative */
	{
		return (-1);
	} else if (n == 0) /* Check if the number is 0 */
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}

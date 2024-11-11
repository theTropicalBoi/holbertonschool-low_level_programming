#include "main.h"
/**
 * find_sqrt - Helper function to find square root recursively
 * @n: number to find square root of
 * @guess: current guess for square root
 * Return: natural square root or -1 if none exists
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	else
	{
	return (find_sqrt(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: number to find square root of
 * Return: natural square root or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (find_sqrt(n, 0));
	}
}

#include "main.h"
/**
 * _pow_recursion - Calculates the power of a number with recursion
 * @x: Number to calculate the power of
 * @y: Power to calculate
 * Return: The power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}

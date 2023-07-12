#include "main.h"

/**
 * _pow_recursion - a function that returns
 * The value of x raised to the power of y
 * @x: integer arg
 * @y: integer arg
 * Return: pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

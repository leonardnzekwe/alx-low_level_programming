#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: param
 * Return: value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}

/**
 * _sqrt - function
 * @num: param
 * @root: param
 * Return: value
 */

int _sqrt(int num, int root)
{
	if ((num * num) == root)
	{
		return (num);
	}
	else if ((num * num) > root)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(num + 1, root));
	}
}

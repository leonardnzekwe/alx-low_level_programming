#include "main.h"

/**
 * _abs - Function
 * @v: Paremeter
 * Return: v ? absolute value
 */
int _abs(int v)
{
	if (v >= 0)
	{
		return (v);
	}
	else
	{
		return (v * -1);
	}
}

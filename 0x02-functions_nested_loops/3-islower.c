#include "main.h"

/**
 * _islower - Function
 * Return: 1 ? 0
 * @c: paramemter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

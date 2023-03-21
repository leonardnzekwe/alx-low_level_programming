#include "main.h"

/**
 * _isalpha - Function
 * @c: Paremeter
 * Return: 1 ? 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c >= 'A' && c <= 'z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

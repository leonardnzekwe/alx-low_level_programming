#include "main.h"

/**
 * _strlen_recursion - function
 * @s: param
 * Return: 0 ? 1
 */

int _strlen_recursion(char *s)
{
	int leo = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (leo + (_strlen_recursion(s + 1)));
	}
}

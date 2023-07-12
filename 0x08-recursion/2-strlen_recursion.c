#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string that the length will be found
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (0);

	length += 1 + _strlen_recursion(s + 1);

	return (length);
}

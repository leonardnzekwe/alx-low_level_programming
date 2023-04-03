#include "main.h"

/**
 * memset - function
 * @s: param
 * @b: param
 * @n: param
 * Return: s
 */

char *memset(char *s, char b, unsigned int n)
{
	int leo;

	for (leo = 0; leo < n; leo++)
	{
		s[leo] = b;
	}
	return (s);
}

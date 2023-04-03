#include "main.h"

/**
 * _memcpy - function
 * @dest: param
 * @src: param
 * @n: param
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int leo;

	for (leo = 0; leo < n; leo++)
	{
		dest[leo] = src[leo];
		_putchar(*dest);
	}
	return (dest);
}

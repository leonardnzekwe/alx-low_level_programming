#include "main.h"

/**
 * _strcat - function
 * @dest: param
 * @src: param
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int ray;
	int leo;

	for (ray = 0; dest[ray] != '\0'; ray++)
	{
		;
	}
	for (leo = 0; src[leo] != 0; leo++)
	{
		dest[ray] = src[leo];
		ray++;
	}
	dest[ray] = '\0';
	return (dest);
}

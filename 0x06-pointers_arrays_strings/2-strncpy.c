#include "main.h"

/**
 * _strncpy - function
 * @dest: param
 * @src: param
 * Return 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ray;

	for (ray = 0; ray < n && dest[ray] != '\0'; ray++)
	{
		dest[ray] = src[ray];
	}
	for (; n > ray; ray++)
	{
		dest[ray] = '\0';
	}
	return (dest);
}

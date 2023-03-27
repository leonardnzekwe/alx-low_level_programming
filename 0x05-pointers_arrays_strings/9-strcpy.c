include "main.h"

/**
 * _strcpy - function
 * @dest: param
 * @src: param
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int ray;

	for (ray = 0; src != '\0'; ray++)
	{
		dest[ray] = src[ray];
	}
	dest[ray++] = '\0';

	return (dest);
}

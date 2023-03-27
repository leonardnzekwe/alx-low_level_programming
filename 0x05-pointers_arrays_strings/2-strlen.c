#include "main.h"

/**
 * _strlen - function
 * @s: param
 * Return: ray
 */

int _strlen(char *s)
{
	int ray;

	ray = 0;
	while (*s != '\0')
	{
		ray++;
		s++;
	}
	return (ray);
}

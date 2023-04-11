#include <stdlib.h>
#include "main.h"

/**
 * create_array - function
 * @size: param
 * @c: param
 * Return: leo
 */

char *create_array(unsigned int size, char c)
{
	char *leo;
	unsigned int ray;

	if (size == 0)
	{
		return (NULL);
	}

	leo = malloc(sizeof(char) * size);

	if (leo == NULL)
	{
		return (NULL);
	}

	for (ray = 0; ray < size; ray++)
	{
		leo[ray] = c;
	}

	return (leo);
}

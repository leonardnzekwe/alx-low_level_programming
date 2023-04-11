#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function
 * @str: param
 * Return: hush
 */

char *_strdup(char *str)
{
	int leo, ray;
	char *hush;

	if (str == NULL)
	{
		return (NULL);
	}

	for (ray = 1; str[ray]; ray++)
	{;
	}

	hush = malloc((sizeof(char) * ray) + 1);
	if (hush == NULL)
	{
		return (NULL);
	}

	for (leo = 0; leo < ray; leo++)
	{
		hush[leo] = str[leo];
	}

	hush[leo] = '\0';
	return (hush);
}

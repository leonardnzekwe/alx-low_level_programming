#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: param
 * @size: param
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int leo;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	for (leo = 0; leo < nmemb; leo++)
	{
		p[leo] = 0;
	}
	return (p);
}

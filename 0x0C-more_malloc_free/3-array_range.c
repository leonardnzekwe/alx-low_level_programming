#include "main.h"
#include <stdlib.h>

/**
 * array_range - function
 * @min: param
 * @max: param
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int ray, leo;

	if (min > max)
	{
		return (NULL);
	}
	ray = max - min + 1;
	p = malloc(sizeof(int) * ray);
	if (p == NULL)
	{
		return (NULL);
	}
	for (leo = 0; leo < ray; leo++)
	{
		p[leo] = min + leo;
	}
	return (p);
}

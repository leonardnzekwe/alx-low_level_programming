#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function
 * @width: param
 * @height: param
 * Return: p
 */

int **alloc_grid(int width, int height)
{
	int leo, ray;
	int **p;

	if (height < 1)
	{
		return (NULL);
	}
	p = (int **) malloc(sizeof(p) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (leo = 0; leo < height; leo++)
	{
		p[leo] = malloc(sizeof(int) * width);
		if (p[leo] == NULL)
		{
			for (ray = 0; ray < leo; ray++)
			{
				free(p[ray]);
			}
			free(p);
			return (NULL);
		}

		for (ray = 0; ray < width; ray++)
		{
			p[leo][ray] = 0;
		}
	}
	return (p);
}

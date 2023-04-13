#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function
 * @s1: param
 * @s2: param
 * @n: param
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a]; a++)
	{
		;
	}
	for (b = 0; s2[b]; b++)
	{
		;
	}
	if (b > n)
		b = n;
	else
		n = b;
	c = a + b + 1;
	p = malloc(sizeof(char) * c);
	if (p == NULL)
		return (NULL);
	for (d = 0; d < c - 1; d++)
	{
		if (d < a)
			p[d] = s1[d];
		else
			p[d] = s2[d - a];
	}
	p[c - 1] = '\0';
	return (p);
}

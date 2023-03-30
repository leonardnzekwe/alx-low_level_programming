#include "main.h"

/**
 * _strcmp - function
 * @s1: param
 * @s2: param
 * Return: d
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int ray;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		ray = a;
	}
	else
	{
		leo = b;
	}
	while (c <= leo)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (d);
}

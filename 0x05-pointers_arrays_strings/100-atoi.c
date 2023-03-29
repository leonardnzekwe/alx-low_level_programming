#include "main.h"

/**
 * _atoi - function
 * @s: param
 * Return: 0
 */

int _atoi(char *s)
{
	int r = 0;
	int a = 1;
	int y = 0;
	unsigned int ray = 0;

	while (s[r])
	{
		if (s[r] == 45)
		{
			a *= -1;
		}
		while (s[r] >= 48 && s[r] <=57)
		{
			y = 1;
			ray = (ray * 10) + (s[r] - '0');
			r++;
		}
		if (y == 0)
		{
			break;
		}
		r++;
	}
	ray *= a;
	return (ray);
}

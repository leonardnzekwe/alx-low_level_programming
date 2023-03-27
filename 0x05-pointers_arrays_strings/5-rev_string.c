#include "main.h"

/**
 * rev_string - function
 * @s: param
 */

void rev_string(char *s)
{
	int r = 0;
	int a = 0;
	char y;

	while (s[r] != '\0')
	{
		r++;
	}
	while (a < r--)
	{
		y = s[a];
		s[a++] = s[r];
		s[r] = y;
	}
}

#include "main.h"

/**
 * _strchr - function
 * @s: param
 * @c: param
 */

char *_strchr(char *s, char c)
{
	int leo;

	for (leo = 0; s[leo] != '\0'; leo++)
	{
		if (s[leo] == c)
		{
			return (s + leo);
		}
	}
	return ('\0');
}

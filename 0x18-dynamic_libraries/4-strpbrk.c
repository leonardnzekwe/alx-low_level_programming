#include "main.h"

/**
 * _strpbrk - function
 * @s: param
 * @accept: param
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int leo, ray;

	for (leo = 0; s[leo] != '\0'; leo++)
	{
		for (ray = 0; accept[ray] != '\0'; ray++)
		{
			if (s[leo] == accept[ray])
			{
				return (s + leo);
			}
		}
	}
	return ('\0');
}

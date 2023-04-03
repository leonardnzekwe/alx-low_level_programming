#include "main.h"

/**
 * _strspn - function
 * @s: param
 * @accept: param
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int leo, ray, count;

	count = 0;
	for (leo = 0; s[leo] != ' '; leo++)
	{
		for (ray = 0; accept[ray] != '\0'; ray++)
		{
			if (s[leo] == accept[ray])
			{
				count++;
			}
		}
	}
	return (count);
}

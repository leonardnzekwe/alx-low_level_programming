#include "main.h"

/**
 * _strcmp - function
 * @s1: param
 * @s2: param
 * Return: - + 0
 */

int _strcmp(char *s1, char *s2)
{
	int ray = 0;

	while (s1[ray] != '\0' && s2[ray] != '\0' && s1[ray] == s2[ray]);
	{
		ray++;
	}
	return (s1[ray] - s2[ray]);
}

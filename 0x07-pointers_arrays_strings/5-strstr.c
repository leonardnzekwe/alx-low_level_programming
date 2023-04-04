#include "main.h"

/**
 * _strstr - function
 * @haystack: param
 * @needle: param
 * Return: found needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int leo;

	for (leo = 0; haystack[leo] != '\0'; leo++)
	{
		if (needle[0] == haystack[leo])
		{
			return (haystack + leo);
		}
	}
	return ('\0');
}

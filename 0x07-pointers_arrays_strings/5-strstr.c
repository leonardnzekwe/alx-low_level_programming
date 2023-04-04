#include "main.h"

/**
 * _strstr - function
 * @haystack: param
 * @needle: param
 * Return: found needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		if (*needle == *haystack)
		{
			return (haystack);
		}
	}
	return ('\0');
}

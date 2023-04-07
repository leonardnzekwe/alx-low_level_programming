#include "main.h"

/**
 * string_toupper - function
 * @leo: param
 * Return: leo
 */

char *string_toupper(char *leo)
{
	int ray = 0;

	while (leo[ray] != '\0')
	{
		if (leo[ray] >= 'a' && leo[ray] <= 'z')
		{
			leo[ray] -= 'a' - 'A';
		}
		ray++;
	}
	return (leo);
}

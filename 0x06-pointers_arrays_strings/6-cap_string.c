#include "main.h"

/**
 * cap_string - function
 * @ray: param
 * Return: ray
 */

char *cap_string(char *ray)
{
	int a = 1;
	int b;
	int leo[] = " \t\n,;.!?\"(){}";

	if (ray[0] >= 'a' && ray[0] <= 'z')
	{
		ray[0] -= ('a' - 'A');
	}
	while (ray[a] != '\0')
	{
		for (b = 0; leo[b] != '\0'; b++)
		{
			if (ray[a - 1] == leo[b] && (ray[a] >= 'a' && ray[a] <= 'z'))
			{
				ray[a] -= ('a' - 'A');
			}
		}
		a++;
	}
	return (ray);
}

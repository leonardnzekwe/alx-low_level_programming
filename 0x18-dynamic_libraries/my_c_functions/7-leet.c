#include "main.h"

/**
 * leet - function
 * @ray: param
 * Return: ray
 */

char *leet(char *ray)
{
	int a = 0;
	int b;
	char leo[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char ola[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (ray[a])
	{
		for (b = 0; b < 10; b++)
		{
			if (ray[a] == ola[b])
			{
				ray[a] = leo[b];
			}
		}
		a++;
	}
	return (ray);
}

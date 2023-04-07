#include "main.h"

/**
 * cap_string - function
 * @ray: param
 * Return: ray
 */

char *cap_string(char *ray)
{
	int leo = 0;

	while (ray[leo] != '\0')
	{
		if (ray[0] >= 97 && ray[0] <= 122)
		{
			ray[0] = ray[0] - 32;
		}
		if (ray[leo] == ' ' || ray[leo] == '\t' || ray[leo] == '\n'
		    || ray[leo] == ',' || ray[leo] == ';' || ray[leo] == '.'
		    || ray[leo] == '.' || ray[leo] == '!' || ray[leo] == '?'
		    || ray[leo] == '"' || ray[leo] == '(' || ray[leo] == ')'
		    || ray[leo] == '{' || ray[leo] == '}')
		{
			if (ray[leo + 1] >= 97 && ray[leo + 1] <= 122)
			{
				ray[leo + 1] = ray[leo + 1] - 32;
			}
		}
		leo++;
	}
	return (ray);
}

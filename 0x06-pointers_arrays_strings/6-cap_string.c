#include "main.h"

/**
 * cap_string - function
 * @ray: param
 * Return: ray
 */

char *cap_string(char *s)
{
	int ray = 0;

	while (s[ray] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[ray] == ' ' || s[ray] == '\t' || s[ray] == '\n'
		    || s[ray] == ',' || s[ray] == ';' || s[ray] == '.'
		    || s[ray] == '.' || s[ray] == '!' || s[ray] == '?'
		    || s[ray] == '"' || s[ray] == '(' || s[ray] == ')'
		    || s[ray] == '{' || s[ray] == '}')
		{
			if (s[ray + 1] >= 97 && s[ray + 1] <= 122)
			{
				s[ray + 1] = s[ray + 1] - 32;
			}
		}
		ray++;
	}
	return (s);
}

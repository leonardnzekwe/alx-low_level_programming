#include "main.h"

/**
 * puts2 - function
 * @str: param
 */

void puts2(char *str)
{
	int ray;

	while (str[ray] != '\0')
	{
		if (ray % 2 == 0)
		{
			_putchar(str[ray]);
		}
		ray++;
	}
	_putchar('\n');
}

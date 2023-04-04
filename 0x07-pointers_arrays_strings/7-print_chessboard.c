#include "main.h"

/**
 * print_chessboard - function
 * @a: param
 */

void print_chessboard(char (*a)[8])
{
	int leo, ray;

	for (leo = 0; leo < 8; leo++;)
	{
		for (ray = 0; ray < 8; ray++)
		{
			_putchar(a[leo][ray]);
		}
		_putchar('\n);
	}
}

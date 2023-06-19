#include "operations.h"

/**
 * main - Entry point of the program
 * Return: Success (0)
 */

int main(void)
{
	int a = 10;
	int b = 5;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d / %d = %d\n", a, b, div(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));
	printf("%d %% %d = %d\n", a, b, mod(a, b));

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * putchar - Prints the output
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 0);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * putchar - Prints the output
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned char num = 0;

	while (num <= 9)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * prinf - Prints the output
 * Return: 0 (Success)
 */
int main(void)
{
	char num = 0;

	while (num <= 9)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}

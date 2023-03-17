#include <stdio.h>

/**
 * main - Entry point
 * printf - Prints the output
 * Return: 0 (Success)
 */
int main(void)
{
	char num = 0;

	while (num <= 9)
	{
		printf("%c", num);
		num++;
	}
	putchar('\n');
	return (0);
}

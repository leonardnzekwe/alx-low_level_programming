#include <stdio.h>

/**
 * main - Entry point
 * putchar - Prints the output
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

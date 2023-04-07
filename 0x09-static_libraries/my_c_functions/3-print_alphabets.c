#include <stdio.h>

/**
 * main - Entry point
 * putchar - prints the output
 * Return: 0 (Success)
 */
int main(void)
{
	char lower_letter, capital_letter;

	for (lower_letter = 'a'; lower_letter <= 'z'; lower_letter++)
	{
		putchar(lower_letter);
	}
	for (capital_letter = 'A'; capital_letter <= 'Z'; capital_letter++)
	{
		putchar(capital_letter);
	}
	putchar('\n');
	return (0);
}

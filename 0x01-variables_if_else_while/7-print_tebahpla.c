#include <stdio.h>

/**
 * main - Entry point
 * putchar - Prints the output
 * Return:  0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter < 'z')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

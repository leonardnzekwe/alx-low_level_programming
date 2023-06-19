#include <stdio.h>

/**
 * main - Entry point
 * putchar - Prints the output
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if ((letter == 'q') || (letter == 'e'))
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

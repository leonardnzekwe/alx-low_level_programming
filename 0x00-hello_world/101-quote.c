#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * write - writes to the std error
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (1);
}

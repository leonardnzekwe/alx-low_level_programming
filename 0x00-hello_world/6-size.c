#include <stdio.h>

/**
 * main - Entry point
 * printf  - prints the size
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %c\n", (char)sizeof(a));
	printf("Size of an int: %d\n", (int)sizeof(b));
	printf("Size of a long int: %lu\n", (long int)sizeof(c));
	printf("Size of a long long int:%lu\n", (long long int)sizeof(d));
	printf("Size of a float: %f\n", (float)sizeof(e));
	return (0);
}

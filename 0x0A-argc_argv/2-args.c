#include <stdio.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int leo;

	for (leo = 0; leo < argc; leo++)
	{
		printf("%s\n", argv[leo]);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 ? 1
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

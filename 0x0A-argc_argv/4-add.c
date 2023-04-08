#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: param
 * @argv: param
 * Return: 0 ? 1
 */

int main(int argc, char *argv[])
{
	int ray;
	int sum = 0;
	int leo = 0;

	if (argc == 1)
	{
		printf("%d\n", leo);
	}
	else if (argc > 1)
	{
		for (ray = 1; ray < argc; ray++)
		{
			sum = sum + atoi(argv[ray]);
			if (*argv[ray] < 48 || *argv[ray] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

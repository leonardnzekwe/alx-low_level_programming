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
	int ray, leo;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (ray = 1; ray < argc; ray++)
		{
			for (leo = 0; argv[ray][leo] != '\0'; leo++)
			{
				if (argv[ray][leo] < 48 || argv[ray][leo] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[ray]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

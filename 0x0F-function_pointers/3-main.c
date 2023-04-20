#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];

	if (get_op_func(sign) == NULL || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *sign == '/') || (num2 == 0 && *sign == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(sign))(num1, num2);
	printf("%d\n", result);
	return (0);
}

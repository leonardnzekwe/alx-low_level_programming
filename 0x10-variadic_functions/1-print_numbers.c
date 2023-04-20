#include "variadic_functions.h"

/**
 * print_numbers - variadic function
 * @separator: named parameter for string to be printed between numbers
 * @n: named parameter for keeping count
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (separator != NULL && i < n - 1)
			{
				printf("%d%s", va_arg(args, int), separator);
			}
			else
			{
				printf("%d", va_arg(args, int));
			}
		}
		va_end(args);
	}
	printf("\n");
}

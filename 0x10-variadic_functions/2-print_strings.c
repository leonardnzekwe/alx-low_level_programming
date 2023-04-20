#include "variadic_functions.h"

/**
 * print_strings - variadic function
 * @separator: named parameter for string, to be printed between the strings
 * @n: named parameter for the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s_arg;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			s_arg = va_arg(args, char *);
			printf("%s", (s_arg != NULL) ? s_arg : "(nil)");
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}

#include <unistd.h>

/**
 * _putchar - Function
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

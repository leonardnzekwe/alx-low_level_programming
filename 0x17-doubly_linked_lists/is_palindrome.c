#include <stdio.h>

/**
 * is_palindrome - function that checks
 * if the product of two numbers is a palindrome
 * @n: product parameter
 * Return: True or False
 */

int is_palindrome(int n)
{
	int reverse = 0, original = n;

	while (n > 0)
	{
		reverse = reverse * 10 + n % 10;
		n = n / 10;
	}
	return (original == reverse);
}

/**
 * main - Entry point of the program
 * Return: 0
 */

int main(void)
{
	int largest_palindrome = 0;

	for (int i = 999; i >= 100; i--)
	{
		for (int j = i; j >= 100; j--)
		{
			int product = i * j;

			if (product > largest_palindrome && is_palindrome(product))
			{
				largest_palindrome = product;
			}
		}
	}
	printf("%d", largest_palindrome);
	return (0);
}

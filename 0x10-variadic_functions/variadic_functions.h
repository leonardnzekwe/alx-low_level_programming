#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct format_specifier - format specifier structure
 * @fmt_sign: format sign parameter
 * @fmt_func_ptr: format functio parameter
 */

typedef struct format_specifier
{
	char fmt_sign;
	void (*fmt_func_ptr)(va_list);
} fmt;

/* Prototypes */
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Other Prototypes */
void char_print(va_list c);
void int_print(va_list i);
void float_print(va_list f);
void string_print(va_list s);

#endif /* VARIADIC_FUNCTIONS_H */

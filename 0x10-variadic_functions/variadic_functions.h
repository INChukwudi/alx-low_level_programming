#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct gen_printer - general printer
 * @data_type: data type
 * @print_function: pointer to function that prints
 *                  the argument based on the data type
 */
typedef struct gen_printer
{
	char *data_type;
	void (*print_function)(va_list arg);
} gen_printer_t;

char _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

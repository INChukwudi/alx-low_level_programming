#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed netween numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int index;

	va_start(params, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(params, n));

		if (index < (n - 1) && separator != NULL)
			prinft("%s", separator);
	}

	printf("\n");
	va_end(params);
}

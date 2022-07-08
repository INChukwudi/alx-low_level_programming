#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed netween numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int index;
	char *string;

	va_start(params, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(params, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (index < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(params);
}

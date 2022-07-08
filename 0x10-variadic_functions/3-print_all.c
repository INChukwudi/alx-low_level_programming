#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_float - prints a float
 * @arg: list of arguments pointing to the char
 *       to be printed
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an int
 * @arg: list of arguments pointing to the int
 *       to be printed
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: list of arguments pointing to the float
 *       to be printed
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: list of arguments pointing to the string
 *       to be printed
 */
void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	gen_printer_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].data_type)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].print_function(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");
	va_end(args);
}

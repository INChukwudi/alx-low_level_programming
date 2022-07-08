#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: 0 if n == 0
 *         sum of all the paramters passed in
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int index, sum = 0;

	if (n == 0)
		return (0);

	va_start(params, n);

	for (index = 0; index < n; index++)
		sum += va_arg(params, int);

	va_end(params);
	return (sum);
}

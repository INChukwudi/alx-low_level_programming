#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name passed in to it
 * @name: the name to be printed
 * @f: function that doe the printing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

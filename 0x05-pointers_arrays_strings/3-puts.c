#include "main.h"

/**
 * _puts - prints a string and a new line to stdout
 * @str -  string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

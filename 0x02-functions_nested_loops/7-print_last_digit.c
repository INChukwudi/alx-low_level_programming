#include "main.h"

/**
 * print_last_digit - prints out the last digit of a number
 * @c: the number
 *
 * Return: the last digit of the number
 */
int print_last_digit(int c)
{
	int l;

	l = c % 10;
	_putchar(l + '0');
	return l;
}

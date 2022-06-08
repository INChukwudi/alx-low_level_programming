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

	if (c < 0)
	{
		c = (-1) * c;
	}
	if (c == -2147483648)
	{
		_putchar('8');
		return (8);
	}

	l = c % 10;
	_putchar('0' + l);
	return (l);
}

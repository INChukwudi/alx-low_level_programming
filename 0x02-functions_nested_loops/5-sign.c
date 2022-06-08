#include "main.h"

/**
 * print_sign - print a sign based on the number passed in
 * @n: the umber passed in
 *
 * Return: 0 if the number is equal to 0
 * 1 if the number is greater than 0
 * -1 if the number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

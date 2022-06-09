#include "main.h"

/**
 * print_diagonal - prints out a diagonal line
 * @n: the number of lines to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, z;

		for (i = 0; i < n; i++)
		{
			for (z = 1; z < i + 1; z++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

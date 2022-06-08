#include "main.h"

/**
 * print_times_table - print out the times yable for a number n
 * @n: number
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		_putchar('');
	}
	else
	{
		int row, col, d;

		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			for (col = 1; col <= n; col++)
			{
				d = (row * col);
				if ((d / 100) > 0)
					_putchar((d / 100) + '0');
				if ((d / 10) > 0)
					_putchar ((d / 10) + '0');
				else
					_putchar(' ');
				_putchar((d % 10) + '0');

				if (col < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}

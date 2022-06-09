#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: height and base of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, n, z;

		for (i = 1; i <= size; i++)
		{
			z = size - i;

			for (n = 0; n < size; n++)
			{
				if (n < z)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

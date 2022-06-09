#include "main.h"

void print_square(int size)
{
	if (size > 0)
	{
		int i, n;

		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

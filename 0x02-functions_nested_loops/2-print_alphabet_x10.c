#include "main.h"

/**
 * print_alphabet_x10: prints the letters 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	char l;

	for (c = 0; c < 10; c++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}

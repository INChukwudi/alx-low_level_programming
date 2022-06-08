#include "main.h"

/**
 * main - print the letters of the alphabet
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints out the letters of the alphabet followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

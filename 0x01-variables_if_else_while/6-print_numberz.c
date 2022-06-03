#include <stdio.h>

/**
 * main - function that prints out the single digit numbers of base 10
 *
 * Return: 0 to indicate end of program
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	putchar('\n');
	return (0);
}

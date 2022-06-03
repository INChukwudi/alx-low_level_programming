#include <stdio.h>

/**
 * main - function that prints out the single digit numbers of base 10
 *
 * Return: 0 to indicate end of program
 */
int main(void)
{
	char num;

	for (num = '1'; num <= '9'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}

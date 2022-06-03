#include <stdio.h>

/**
 * main - function to print numbers in base 16
 *
 * Return: 0 to indicate end of function
 */
int main(void)
{
	int num;

	for (num = 0x0; num <= 0xF; num++)
	{
		char* base16 = (char*) &num;
		putchar((char) base16);
	}
	putchar('\n');
	return (0);
}

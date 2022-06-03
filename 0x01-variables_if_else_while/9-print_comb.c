#include <stdio.h>

/**
 * main - function that prints out the lowercase letters
 *
 * Return: 0 to indicate end of program
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

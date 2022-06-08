#include <stdio.h>

/**
 * main - function that prints out the lowercase letters
 *
 * Return: 0 to indicate end of program
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (!(num1 == 8 && num2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
#include <stdio.h>

/**
 * main - function to print numbers in base 10
 *
 * Return: 0 to indicate end of function
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}

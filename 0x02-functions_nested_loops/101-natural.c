#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 and 5 up till 1024
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) || (i % 5))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

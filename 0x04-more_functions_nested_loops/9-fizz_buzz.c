#include <stdio.h>

/**
 * main - print out 1 to 100
 * for multiples of 3, it prints out Fizz
 * for multiples of 5, it prints out Buzz
 * for multiples of 3 and 5, it prints out FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	return (0);
}

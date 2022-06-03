#include <stdio.h>

/**
 * main - function that prints out the lowercase letters except q and e
 *
 * Return: 0 to indicate end of program
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

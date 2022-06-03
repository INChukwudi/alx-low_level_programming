#include <stdio.h>

/**
 * main - function that prints out the lowercase letters
 *
 * Return: 0 to indicate end of program
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}

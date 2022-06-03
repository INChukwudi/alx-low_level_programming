#include <stdio.h>

/**
 * main - function that prints out the lowercase letters in reverse
 *
 * Return: 0 to indicate end of program
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - function that prints out the lowercase letters
 *
 * Return: 0 to indicate end of program
 */
int main()
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);		    
	
	putchar('\n');
        return (0);
}

#include <stdio.h>

void __attribute__((constructor)) startup(void);

/**
 * startup - prints string before main function is executed
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}

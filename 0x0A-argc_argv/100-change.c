#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Erro\n");
		return (1);
	}

	cents = atoi(argv[1]);

	printf("%d\n", coins);
	return (0);
}

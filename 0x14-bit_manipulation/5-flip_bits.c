#include "main.h"

/**
 * flip_bits - returns the number of bits one would need to
 *             flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	int count = 0;

	if (!n || !m)
		return (0);
	while (xor)
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}
	return (count);
}

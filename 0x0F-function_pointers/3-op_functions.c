#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: first addend
 * @b: second addend
 *
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts one integrr from another
 * @a: minuend
 * @b: subtrahend
 *
 * Return: the difference between @a nd @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: multiplicand
 * @b: multiplier
 *
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one number by another
 * @a: dividend
 * @b: divisor
 *
 * Return: the integer quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - performs the modulo operation on two integers
 * @a: dividend
 * @b: divisor
 * 
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

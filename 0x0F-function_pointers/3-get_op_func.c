#include <stddef.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 *               the operation asked by the user
 * @s: operator passed in
 *
 * Return: NULL if @s does not match the operators
 *         pointer to the function that matches @s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{".", NULL},
		{NULL, NULL}
	};
	int i = 0;

	while (strcmp(s, ops[i].op) != 0)
		i++;

	return (ops[i].f);
}

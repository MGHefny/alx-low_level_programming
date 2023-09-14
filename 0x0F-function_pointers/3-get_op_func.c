#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - the correct fun
 * @s: the passed of arg
 * Return: pointer to fun
 */
int (*get_op_func(char *s))(int, int)
{
	int x = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	while (ops[x].op != NULL && *(ops[x].op) != *s)
		x++;
	return (ops[x].f);
}

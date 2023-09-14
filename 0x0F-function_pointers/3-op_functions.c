#include "3-calc.h"
int op_sub(int a, int b);
int op_add(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_mul(int a, int b);
/**
 * op_add - sum 2 numb
 * @a: numb value 1
 * @b: numb value 2
 * Return: sum 1 and 2
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the diff 2 numb
 * @a: numb value 1
 * @b: numb value 2
 * Return: the diff 1 and 2
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the prod 2 numb
 * @a: numb value 1
 * @b: numb value 2
 * Return: the prod 1 and 2
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the divi 2 numb
 * @a: numb value 1
 * @b: numb value 2
 * Return: the divi 1 and 2
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder the divi 2 numb
 * @a: numb value 1
 * @b: numb value 2
 * Return: remainder the divi a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

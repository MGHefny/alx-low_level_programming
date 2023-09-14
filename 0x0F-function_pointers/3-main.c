#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Prints result
 * @argv: arr pointers the arg
 * @argc: numb of arg
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (op[1] != '\0' || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((*op == '%' && num2 == 0) || *op == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print the name with pointer fun
 * @f: pointer
 * @name: str value
 * Return: null
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

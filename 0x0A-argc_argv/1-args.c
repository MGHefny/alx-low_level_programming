#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: number arg
 * @argv: arr arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description:  prints the alphabet in lowercase.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar('c');
	}
	return (0);
}

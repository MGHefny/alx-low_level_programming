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
	int n;
	int x;
	char c[6] = "abcdef";

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (x = 0; x < 6; x++)
	{
		putchar(c[x]);
	}
	putchar('\n');
	return (0);
}

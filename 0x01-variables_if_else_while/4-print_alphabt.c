#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description:  prints the alphabet in lowercase without q and e.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[24] = "abcdfghijklmnoprstuvwxyz";
	int n;

	for (n = 0; n < 24; n++)
	{
		putchar(c[n]);
	}
	putchar('\n');
	return (0);
}

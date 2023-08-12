#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description:  prints all  alphabet.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n;

	for (n = 0 ; n <= 52 ; n++)
	{
		putchar(c[n]);
	}
	putchar('\n');
	return (0);
}

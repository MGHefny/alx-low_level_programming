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
	char c;
	char C;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar(c);
	for (C = 'A' ; C <= 'Z' ; C++)
	{
		putchar(c);
	}
	putchar(C);
	return (0);
}

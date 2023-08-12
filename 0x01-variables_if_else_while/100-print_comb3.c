#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description: different combinations of two digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x;

	for (n = 48; n <= 56; n++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > n)
			{
				putchar(n);
				putchar(x);
				if (n != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


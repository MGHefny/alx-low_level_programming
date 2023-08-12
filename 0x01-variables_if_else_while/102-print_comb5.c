#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description: combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x;

	for (n = 0; n < 100; n++)
	{
		for (x = 0; x < 100; x++)
		{
			if (n < x)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				if (n != 98 || x != 99)
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

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description: different combinations of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x;
	int y;

	for (n = 48; n < 58; n++)
	{
		for (x = 49; x < 58; x++)
		{
			for (y = 50; y < 58; y++)
			{
				if (y > x && x > n)
				{
					putchar(n);
					putchar(x);
					putchar(y);
					if (n != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


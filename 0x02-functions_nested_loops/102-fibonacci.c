#include <stdio.h>

/**
 * main - Prints first 100 Fibonacci numb
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	unsigned long f1 = 0, f2 = 1, sum;

	for (x = 0; x < 100; x++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (x == 99)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
	}


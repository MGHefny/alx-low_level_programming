#include<stdio.h>
#include<stdlib.h>

/**
  * main - program run
  *
  * Return: Always 0
  */

int main(void)
{
	int pass[50];
	int x, y;
	int sum = 0;

	for (x = 0; x < 50; x++)
	{
		pass[x] = rand() % 39;
		sum += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((1386 - sum) - '0' < 39)
		{
			y = 1386 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}

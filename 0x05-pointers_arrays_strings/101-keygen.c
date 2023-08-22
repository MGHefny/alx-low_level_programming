#include<stdio.h>
#include<stdlib.h>

/**
  * main - program run
  *
  * Return: Always 0
  */

int main(void)
{
	int pass[10];
	int x, y;

	int sum = 0;

	for (x = 0; x < 10; x++)
	{
		pass[x] = rand() % 78;
		sum += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}

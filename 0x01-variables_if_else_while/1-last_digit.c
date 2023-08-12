#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point 
 * Description: the last digit greater 5 or less 6 or equal 0.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is is greater than 5\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}

	return (0);
}

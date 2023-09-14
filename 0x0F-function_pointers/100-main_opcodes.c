#include <stdlib.h>
#include <stdio.h>
/**
 * main - the 1 opc
 * @argc: numb arg
 * @argv: ar argu
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int by, x;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ar = (char *)main;

	for (x = 0; x < by; x++)
	{
		if (x == by - 1)
		{
			printf("%02hhx\n", ar[x]);
			break;
		}
		printf("%02hhx ", ar[x]);
	}
	return (0);
}

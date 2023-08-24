#include"main.h"
/**
  * leet - function 1337
  * @n: input
  * Return: n
  */

char *leet(char *n)
{
	int x, y;
	char str_1[] = "aAeEoOtTlL";
	char str_2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == str_1[y])
			{
				n[x] = str_2[y];
			}
		}
	}
	return (n);
}

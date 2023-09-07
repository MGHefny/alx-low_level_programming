#include "main.h"
#define ERR_MSG "Error"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - checks string of non-digit char
 * @s: evaluated string
 * Return: 0 if non-digit and 1 otherwise
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns length of str
 * @s: evaluate string
 * Return: length
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numb
 * @argc: number value
 * @argv: array value
 * Return: always 0
 */
int main(int argc, char *argv[])
{char *sr1, *sr2;
	int l1, l2, l, x, carr, d1, d2;
	int  *result, a = 0;

	sr1 = argv[1], sr2 = argv[2];
	if (argc != 3 || !is_digit(sr1) || !is_digit(sr2))
		errors();
	l1 = _strlen(sr1);
	l2 = _strlen(sr2);
	l = l1 + l2 + 1;
	result = malloc(sizeof(int) * l);
	if (!result)
		return (1);
	for (x = 0; x <= l1 + l2; x++)
		result[x] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = sr1[l1] - '0';
		carr = 0;
		for (l2 = _strlen(sr2) - 1; l2 >= 0; l2--)
		{
			d2 = sr2[l2] - '0';
			carr += result[l1 + l2 + 1] + (d1 * d2);
			result[l1 + l2 + 1] = carr % 10;
			carr /= 10;
		}
		if (carr > 0)
			result[l1 + l2 + 1] += carr;
	}
	for (x = 0; x < l - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

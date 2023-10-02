#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_bff - 1024 bytes in bff
 * @file: The name file have storing char
 * Return: pointer newly-allocated
 */
char *create_bff(char *file)
{
	char *bff;

	bff = malloc(sizeof(char) * 1024);
	if (bff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write n_l %s\n", file);
		exit(99);
	}

	return (bff);
}

/**
 * close_f - Close file
 * @fi: file descriptor
 */
void close_f(int fi)
{
	int clos;

	clos = close(fi);

	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fi %d\n", fi);
		exit(100);
	}
}

/**
 * main - copies file to file
 * @rgc: numb argument
 * @rgv: arr pointer argument
 * Return: 0
 */
int main(int rgc, char *rgv[])
{
	int o_l, n_l, r_f, w_f;
	char *bff;

	if (rgc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bff = create_bff(rgv[2]);
	o_l = open(rgv[1], O_RDONLY);
	r_f = read(o_l, bff, 1024);
	n_l = open(rgv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (o_l == -1 || r_f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read o_l file %s\n", rgv[1]);
			free(bff);
			exit(98);
		}
		w = write(n_l, bff, r_f);
		if (n_l == -1 || w_f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write n_l %s\n", rgv[2]);
			free(bff);
			exit(99);
		}
		r_f = read(o_l, bff, 1024);
		n_l = open(rgv[2], O_WRONLY | O_APPEND);

	} while (r_f > 0);

	free(bff);
	close_f(o_l);
	close_f(n_l);

	return (0);
}


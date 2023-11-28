#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file STDOUT
 * @filename: file name
 * @letters: numb letter
 * Return: number bytes read, print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t of, wf, rf;
	char *sizef;

	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	sizef = malloc(sizeof(char) * letters);
	rf = read(of, sizef, letters);
	wf = write(STDOUT_FILENO, sizef, rf);

	free(sizef);
	close(of);
	return (wf);
}


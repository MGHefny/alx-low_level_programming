#include "main.h"
/**
 * create_file - new file crate
 * @filename: pointer file creat
 * @text_content: pointer location edit
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int of, wf, size;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wf = write(of, text_content, size);
	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}


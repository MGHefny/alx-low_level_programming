#include "main.h"
/**
 * append_text_to_file - appends text in end file
 * @filename: pointer of the file
 * @text_content: string add in end file
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of, wf, s = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (s = 0; text_content[s];)
			s++;
	}
	of = open(filename, O_WRONLY | O_APPEND);
	wf = write(of, text_content, s);
	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}


#include "main.h"

/**
 * append_text_to_file - add a text in an other file.
 * @filename: the file name .
 * @text_content: add a txt in the end of a file.
 *
 * Return: If fails- -1 Otherwise - 1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, x, lst = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lst = 0; text_content[lst];)
			lst++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	x = write(o, text_content, lst);

	if (o == -1 || x == -1)
		return (-1);

	close(o);

	return (1);
}

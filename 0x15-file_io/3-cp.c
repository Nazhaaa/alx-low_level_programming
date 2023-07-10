#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_bufr(char *file);
void close_file(int valu);

/**
 * create_bufr - Allocates 1024 bytes for a bufr.
 * @file: The name of the file bufr is storing chars for.
 *
 * Return: A pointer to the newly-allocated bufr.
 */
char *create_bufr(char *file)
{
	char *bufr;

	bufr = malloc(sizeof(char) * 1024);

	if (bufr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufr);
}

/**
 * close_file - Closes file -------------------.
 * @fd: The file will be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect print 97.
  */
int main(int argc, char *argv[])
{
	int from, to, r, we;
	char *bufr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufr = create_bufr(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bufr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufr);
			exit(98);
		}

		we = write(to, bufr, r);
		if (to == -1 || we == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufr);
			exit(99);
		}

		r = read(from, bufr, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bufr);
	close_file(from);
	close_file(to);

	return (0);
}

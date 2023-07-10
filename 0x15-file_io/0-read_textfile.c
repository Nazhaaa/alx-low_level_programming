#include "main.h"
#include <stdlib.h>

/**
* read_textfile -lir un fichier
* @letters: nbr of char.
* @filename: name
* Return: if success
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filed, check_r, check_w;
	char *str;

	if (!filename)
		return (0);
	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(filed);
		return (0);
	}
	check_r = read(filed, str, letters);
	if (check_r == -1)
	{
		free(str);
		close(filed);
		return (0);
	}
	check_w = write(STDOUT_FILENO, str, check_r);
	free(str);
	close(filed);
	if (check_w == -1 || check_r != check_w)
	{
		return (0);
	}
	return (check_r);
}

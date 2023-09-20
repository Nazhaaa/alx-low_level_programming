#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src.
 * @dest: pointer 1.
 * @src: pointer 2.
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int i;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

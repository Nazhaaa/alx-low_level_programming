#include "main.h"
#include <stdio.h>
/**
 * _strpbrk -  locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 * @s: string.
 * @accept: string.
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}


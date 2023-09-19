#include "main.h"
/**
 * _memset - a block of inf with a an exact value
 * @s: starting address of memory to be filled
 * @b: char value
 * @n: nbr byte to change size
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

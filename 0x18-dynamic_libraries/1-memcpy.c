#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: pointers stored memory
 *@src: pointer memory copied
 *@n: nbr of bytes
 *
 *Return: copied with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

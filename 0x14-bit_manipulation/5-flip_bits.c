#include "main.h"

/**
 * flip_bits - nbrns the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nbrn = 0;
	unsigned long int cururu;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cururu = exclusive >> i;
		if (cururu & 1)
			nbrn++;
	}

	return (nbrn);
}

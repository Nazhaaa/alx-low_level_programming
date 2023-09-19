#include "main.h"

/**
 * _isdigit -  character is digit
 * @c: The value of digit
 * Return: 1 if digit or 0 if not
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

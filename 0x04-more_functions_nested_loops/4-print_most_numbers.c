#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9 followed by a new line.
 * written by sfiya
 */

void print_most_numbers(void)
{
	char s = '0';

	while (s <= '9')
	{
		if (s != '2' && s != '4')
		{
			_putchar(s);
		}
	s++;
	}
	_putchar('\n');
}


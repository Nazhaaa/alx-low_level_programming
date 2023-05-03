#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int x, s, nb;

	s = 0;
	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		s += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - s) - '0' < 78)
		{
			nb = 2772 - s - '0';
			s += nb;
			putchar(nb + '0');
			break;
		}
}

return (0);
}


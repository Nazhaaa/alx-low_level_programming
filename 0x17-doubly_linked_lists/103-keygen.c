#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints password.
 * @argc: nbr of args supplied to program.
 * @argv: array ponter to args.
 *
 * Return: Always return 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *cod;
	int len = strlen(argv[1]), a, temp;

	cod = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	password[0] = cod[temp];

	temp = 0;
	for (a = 0; a < len; a++)
		temp += argv[1][a];
	password[1] = cod[(temp ^ 79) & 63];

	temp = 1;
	for (a = 0; a < len; a++)
		temp *= argv[1][a];
	password[2] = cod[(temp ^ 85) & 63];

	temp = 0;
	for (a = 0; a < len; a++)
	{
		if (argv[1][a] > temp)
			temp = argv[1][a];
	}
	srand(temp ^ 14);
	password[3] = cod[rand() & 63];

	temp = 0;
	for (a = 0; a < len; a++)
		temp += (argv[1][a] * argv[1][a]);
	password[4] = cod[(temp ^ 239) & 63];

	for (a = 0; a < argv[1][0]; a++)
		temp = rand();
	password[5] = cod[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}


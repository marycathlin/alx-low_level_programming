#include <stdio.h>
#include <string.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

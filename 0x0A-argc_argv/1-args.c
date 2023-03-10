#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the number of arguments passed
*@argc: number of argument passed
*@argv: pointer
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("argc = %d", argc - 1);

	return (0);
}

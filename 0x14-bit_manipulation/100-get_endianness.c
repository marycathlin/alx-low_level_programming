#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - checks endianness.
 * Return: 0- if big_endian, 1 if little endian.
 */

int get_endianness(void)
{
	int count = 1;
	char *endian = (char *)&count;

	if (*endian == 1)
		return (1);

	return (0);
}

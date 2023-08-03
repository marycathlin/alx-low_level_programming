#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary to unsigned int.
 * @b: pointer to a string 0 or 1 chars.
 *
 * Return: positive number converted from a binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, num = 1;
	int count;

	if (*b == '\0')
		return (0);
	for (count = 0; b[count];)
		count++;

	for (count -= 1; count >= 0; count--)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		len += (b[count] - '0') * num;
		num *= 2;
	}
	return (len);
}



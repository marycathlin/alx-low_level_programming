#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: apoint to a string of 0 and 1 chars.
  *
  * Return: if b is NULL or contains chars not 0 or 1 - 0.
  *	otherwise - the converted number.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, mult = 1;
	int len;

	if (b == NULL)

		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		result += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (result);
}

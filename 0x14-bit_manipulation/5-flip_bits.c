#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - counts the number of bits needed to be flipped.
 * @n:the number
 * @m:the number to flip n to.
 * Return: The necessary number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  num = n ^ m, count = 0;

	while (num)
	{
		if (num & 1)
			count++;

		num >>= 1;
	}

	return (count);
}



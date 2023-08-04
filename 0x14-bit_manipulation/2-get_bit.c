#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - Gets the value of abit at a given index
 * @n: the bit
 * @index: the index to get the value at
 *
 * Return: -1 at an error,otherwise -the value of bit at index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

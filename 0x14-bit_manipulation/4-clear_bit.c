#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit - sets the value of abit to 0 at a given index
 * @n: the number to modify
 * @index: the index in the number to modify
 *
 * Return: 1 on success, -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);

}

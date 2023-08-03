#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at an index
 * @n: the number to modify
 * @index: the index in the number to modify
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= (1 << index);
	return (1);

}

#include "main.h"

/**
  * set_bit - sets the value of a bit at a given index to 1
  * @n: a pointer to the bit
  * @index: unsigned int index
  * Return: 1 if success and -1 incase of error
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}

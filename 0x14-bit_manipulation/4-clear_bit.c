#include "main.h"

/**
  * clear_bit - sets the value of abit at a given index to 0.
  * @n: a pointer to the bit
  * @index: unsigned int index
  * Return: 1 if success -1 incase of error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

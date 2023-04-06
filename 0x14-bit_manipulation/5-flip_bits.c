#include "main.h"

/**
  * flip_bits - returns the number of bits needed to be flipped
  * @n: unsigned long int
  * @m: unsigned long int
  *
  * Return: number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = n ^ m;
	unsigned int num = 0;

	while (y > 0)
	{
		num += (y & 1);
		y >>= 1;
	}
	return (num);
}



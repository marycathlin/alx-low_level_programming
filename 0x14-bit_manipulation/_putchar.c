#include "main.h"
#include <unistd.h>
#include <stdlib.h>


/**
  * _putchar - writes the character c to stdout.
  * @c: the character to print
  *
  * Return: On success 1 or -1 on error 
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


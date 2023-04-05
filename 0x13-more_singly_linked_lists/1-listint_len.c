#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * listint_len - Returns the number of elements of a listint_t.
  * @h: a pointer to the head of the list
  *
  * Return: The number of elements in the list.
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

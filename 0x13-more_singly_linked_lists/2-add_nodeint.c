#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - Adds a new node at the begining of a linked list.
  * @head: the head of a linked list.
  * @n: The value to add to the new node.
  * Return: the address of the new element or NULL if t fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = *head;

	*head = new_list;
	return (new_list);
}

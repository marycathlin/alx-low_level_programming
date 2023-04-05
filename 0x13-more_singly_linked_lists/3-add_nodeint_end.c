#include "lists.h"

/**
  * add_nodeint_end - Adds a new node at the end of a listint_t list.
  * @head: A pointer to the address of the head of the listint_t list.
  * @n: integer
  * Return: NULL if the funtion fails or the addess of the new element.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *temp;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_list;
	}
	return (*head);
}

#include "lists.h"

/**
  *delete_nodeint_at_index - deletes the node
  *           at a given index of a list_t list.
  *@head: a pointer to the address of the head of the list.
  *@index: the index of the node to be deleted - indices start at 0.
  *
  *Return: 1 on success or -1 on failure
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp,*copy = *head;
	unsigned int count;

	if (copy == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (count = 0; count < (index - 1); count++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}






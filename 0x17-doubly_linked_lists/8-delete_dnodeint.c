#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of
 * a dlistint_t linked list
 * @head: Pointer to the address of the head of the doubly linked list
 * @index: Index of the node to be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	while (current != NULL)
	{
		if (count == index)
		{
		if (index == 0)
		{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		}
		else
		{
		temp = current->prev;
		temp->next = current->next;
		if (current->next != NULL)
			current->next->prev = temp;
		}
		free(current);
		return (1);
	}
	count++;
	current = current->next;
	}
	return (-1);
}

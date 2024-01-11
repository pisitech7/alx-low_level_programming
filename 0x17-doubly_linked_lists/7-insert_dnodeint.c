#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the address of the head of the doubly linked list
 * @idx: Index where the new node should be added. Index starts at 0
 * @n: Value to be assigned to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *current, *temp;

	if (h == NULL)
		return (NULL);

	current = *h;

	while (current != NULL)
	{
		if (count == idx)
	{
		new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else
		{
			temp = current->prev;
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next = current;
			current->prev = new_node;
			return (new_node);
		}
	}
	count++;
	current = current->next;
	}
	if (idx == count)
	return (add_dnodeint_end(h, n));
	return (NULL);
}

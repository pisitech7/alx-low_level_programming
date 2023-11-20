#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer that points to the head of the list
 * @n: Data to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	/* Assign data to the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, new node becomes the head */
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	/* Traverse to the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	/* Make the last node point to the new node */
	temp->next = new_node;
	return (new_node);
}


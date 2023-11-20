#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer that points to the head of the list
 * @n: Data to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	/* Assign data to the new node */
	new_node->n = n;
	/* Make the new node point to the current head */
	new_node->next = *head;

	/* Update head to point to the new node */
	*head = new_node;
	return (new_node);
}


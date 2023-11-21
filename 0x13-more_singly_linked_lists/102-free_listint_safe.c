#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	while (current != NULL)
	{
	temp = current->next;
	current->next = NULL;
	free(current);
	current = temp;
	count++;
	if (current >= temp)
		break;
	}
	*h = NULL;
	return (count);
}

#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	head = NULL;
}

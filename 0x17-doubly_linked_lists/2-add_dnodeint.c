#include "lists.h"

/**
 * add_dnodeint - new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: new data
 * Return:  address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_data;

	if (head == NULL)
		return (NULL);

	new_data = malloc(sizeof(dlistint_t));

	if (new_data == NULL)
		return (NULL);

	new_data->n = n; /*Assing data*/
	new_data->next = *head;
	new_data->prev = NULL;
	*head = new_data;

	if ((*head) != NULL)
		(*head)->prev = new_data;

	/* 5. move the head to point to the new node */
	(*head) = new_data;

	return (*head);

}

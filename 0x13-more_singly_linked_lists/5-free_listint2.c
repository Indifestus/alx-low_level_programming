#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list.
 *
 * @head: Parameter that point to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return(NULL);


	while (*head)
	{

		tmp = (*head)->next;
		free(*head);
		*head = tmp;

	}


	*head = NULL;

}

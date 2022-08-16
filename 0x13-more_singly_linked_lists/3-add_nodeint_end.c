#include "lists.h"
/**
 * add_nodeint_end -Function that adds a node to the end
 * of a listint_t list.
 *
 * @head: Parameter double pointer that point to the head of
 * the linked list
 * @n: Parameter with the value of the number
 *
 * Return: always return the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *light;

	light = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{

		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head == new;
	}

	else
	{
		if (light->next)
		{
			light = light->next;
		}
		light->next = new;
	}


	return (new);
}

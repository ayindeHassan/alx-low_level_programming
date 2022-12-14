#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of a list
 * @head: pointer to first element of the list
 * @n: n value to the new node
 * Return: Adress of new node - On succes, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/** pointer to new node ðĨ*/
	dlistint_t *new;
	/** creating space ðą*/
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		/** given data to new node ðĨ */
		new->n = n;
		/** new node points to node ahead ðĶī*/
		new->next = *head;
		/** new node prev point to null ð*/
		new->prev = NULL;
		/** head prev points to new node ð */
		(*head)->prev = new;
		/** head points to new node ðĨĪ */
		*head = new;
	}
	/** return the address of new node ð­*/
	return (new);
}

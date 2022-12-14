#include "lists.h"

/**
 * get_dnodeint_at_index - Locate a node at index given
 * @index: index given
 * @head: pointer to first element of list
 * Return: the index of the node On succes, Null On failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/** counter to compare  âšī¸*/
	unsigned int counter;

	counter = 0;
	/** checking the list is not empty đ*/
	while (head)
	{
		/** Found it  đĄ*/
		if (index == counter)
			return (head);
		/** moving next = not found it yet đ§ŋ */
		head = head->next;
		counter++;
	}
	/** if reaches here means node at index does not exist đ*/
	return (NULL);
}

#include "lists.h"

/**
 * check_cycle - it does checking of linked list with cycle
 * @list: the linked list for checking
 *
 * Return: 1 if list possess cycle, 0 if none
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}

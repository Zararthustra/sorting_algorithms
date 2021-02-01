#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 *
 * @list: head pointer
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *compare;

	if (list == NULL)
		return;

	compare = *list;
	compare = compare->next;
	while (compare)
	{
		while (compare->prev != NULL && compare->prev->n > compare->n)
		{
			compare->prev->next = compare->next;

			if (compare->next)
				compare->next->prev = compare->prev;

			compare->next = compare->prev;
			compare->prev = compare->next->prev;
			compare->next->prev = compare;

			if (!compare->prev)
				*list = compare;
			else
				compare->prev->next = compare;
			print_list(*list);
		}
		compare = compare->next;
	}
}

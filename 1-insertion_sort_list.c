#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *a = NULL, *b = NULL, *c = NULL;

	if (list && *list && (*list)->next)
	{
		a = *list;
		b = a->next;
		do {
		} while (flag);
	}
}

/**
 * change- changes two elemnts of a list
 * @a: first element
 * @b: second element
 * Return: void
 */
 void change(listint_t *a, listint_t *b)
 {
	listint_t *n = NULL, *p = NULL;

	n = b->next;
	p = a->prev;
	b->next = a;
	b->prev = p;
	a->next = n;
	a->prev = b;
	if (p)
		p->next = b;
	if (n)
		n->prev = a;
 }

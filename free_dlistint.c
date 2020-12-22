#include "monty.h"

/**
 * free_dlistint - free a double linked list
 * @head: a double linked list
 * Return: nothing
 **/
void free_dlistint(stack_t *head)
{
	stack_t *tmp;

	if (head != NULL)
	{
		tmp = head->next;
		while (tmp != NULL)
		{
			free(head);
			head = tmp;
			tmp = tmp->next;
		}
		free(head);
	}
}

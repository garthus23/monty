#include "monty.h"

char **arr;

/**
 * push_int - verify if there is a number to add
 * Return: 1 when there is one
**/

int push_int(void)
{
	int i = 0;

	if (arr[1])
	{
		if (arr[1][0] == '-')
			i++;
		for (; arr[1][i] != '\0'; i++)
		{
			if (isdigit(arr[1][i]) == 0)
				return (0);
		}
		return (1);
	}
	return (0);
}

/**
 * push_func - add an int to the head
 * @h: a double linked list
 * @j: an int
 * Return: nothing
**/

void push_func(stack_t **h, unsigned int j)
{
	stack_t *new;

	if (push_int() == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", j);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(arr[1]);
	if (*h != NULL)
	{
		new->next = *h;
		(*h)->prev = new;
	}
	else
	{
		new->next = NULL;
	}
	new->prev = NULL;
	*h = new;

}

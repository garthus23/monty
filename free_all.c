#include "monty.h"

/**
 * free_all - free all var malloc'ed
 * @arr: the 2D Array
 * @h: the doubly linked list
 * Return: 0 when it works
**/

int free_all(char **arr, stack_t *h)
{
	free_arr(arr);
	free_dlistint(h);
	return (0);
}

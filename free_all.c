#include "monty.h"

/**
 * free_all - free all var malloc'ed
 * @buff: the buffer
 * @arr: the 2D Array
 * @h: the doubly linked list
 * Return: 0 when it works
**/

int free_all(char *buff, char **arr, stack_t *h)
{

	free(buff);
	free_arr(arr);
	free_dlistint(h);
	return (0);
}

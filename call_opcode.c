#include "monty.h"

char **arr;

/**
 * call_opcode - call the right function from the line
 * @h: a doubly linked list
 * @j: a line in the file
 * Return: 0 when it works
**/

int call_opcode(stack_t **h, unsigned int j)
{
	int i = 0;
	int k = 0;

	instruction_t cases[] = {
		{"push", push_func}, {"pall", pall_func}, {"swap", swap_func},
		{"pint", pint_func}, {"pop", pop_func}, {"add", add_func},
		{"nop", nop_func}, {NULL, NULL}};

	while (cases[i].opcode)
	{
		while (*(cases[i].opcode) != '\0')
		{
			if (arr[0][k] != *(cases[i].opcode))
			{
				break;
			}
			k++;
			cases[i].opcode++;
		}
		if (arr[0][k] == *(cases[i].opcode))
			cases[i].f(h, j);
		k = 0;
		i++;
	}
	return (0);
}

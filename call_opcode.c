#include "monty.h"


int call_opcode(char **arr, unsigned int j)
{
	int i = 0;
	char *cmp;

	instruction_t cases [] = {
 		{"push", push_func}, {NULL, NULL}};


	while (cases[i].opcode)
	{
		if (cmp == *(cases[i].opcode))
		{
			return (cases[i].f(arr), j);
		}
		printf("%s\n", case[i].opcode);
		i++;
	}
	return (0);
}

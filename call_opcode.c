#include "monty.h"


int call_opcode(char *buff)
{
	int i = 0;
	char *cmp;

	instruction_t cases [] = {
 		{"push", push_func}, {NULL, NULL}};


	cmp = malloc(sizeof(char) * strlen(buff));

	for (i = 0; buff[i] != ' '; i++)
	{
		cmp[i] = buff[i];
	}
	cmp[i] = '\0';

	while (cases[i].opcode)
	{
	/*	if (cmp == *(cases[i].opcode))
		{
			return (cases[i].f(buff));
		}*/
		printf("%s\n", case[i].opcode);
		i++;
	}
	return (0);
}

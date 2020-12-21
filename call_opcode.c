#include "monty.h"


int call_opcode(char *buff)
{
	int i = 0;
	char *cmp;

/*	instruction_t cases [] = {
 *		{"push", push_func}, {NULL, NULL}};
 */

	cmp = malloc(sizeof(char) * strlen(buff));

	for (i = 0; buff[i] != ' '; i++)
	{
		cmp[i] = buff[i];
	}
	cmp[i] = '\0';

	printf("%s\n",cmp);
/*	while (cases[i].type)
 *	{
 *		if (c == *(cases[i].type))
 *		{
 *			return (cases[i].f(buff));
 *		}
 *		i++;
 *	}
 */	return (0);
}

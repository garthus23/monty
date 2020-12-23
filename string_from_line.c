#include "monty.h"

/**
 * string_from_line - create a string from a line in a file
 * @fptr: pointer on file
 * @buff: a buffer string
 * @c: char to add to buff
 * Return: 0 when it works
**/

int string_from_line(FILE *fptr, char **buff, char *c)
{
	int i = 0;

	while (*c != '\n')
	{
		(*buff)[i] = *c;
		*c = fgetc(fptr);
		i++;
	}
	(*buff)[i] = '\0';
	return (0);
}

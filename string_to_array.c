#include "monty.h"

/**
 * string_to_array - Transform a string in array
 * @buff: a string
 * @h: a doubly linked list
 * @j: line of the opened file
 * @fptr: pointer on open file
 * Return: an array
**/

char **string_to_array(char *buff, stack_t *h, int j, FILE *fptr)
{
	int i = 0, k;
	const char *delim = " \t\r\n\v\f";
	char *token = NULL;

	token = strtok(buff, delim);
	while (token)
	{
		if (i < 2)
		{
			if (arr[i])
			{
				free(arr[i]);
			}
			arr[i] = malloc(sizeof(char) * (strlen(token) + 100));
			if (!arr[i])
			{
				fprintf(stderr, "Error: malloc failed\n");
				exit(EXIT_FAILURE);
			}
			for (k = 0; token[k] != '\0'; k++)
				arr[i][k] = token[k];
			arr[i][k] = '\0';
		}
		i++;
		token = strtok(NULL, delim);
	}
	push_int(buff, h, j, fptr);
	return (arr);
}

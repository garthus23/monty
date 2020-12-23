#include "monty.h"

/**
 * string_to_array - Transform a string in array
 * @arr: an array 2D
 * @buff: a string
 * Return: an array
**/

char **string_to_array(char **arr, char *buff)
{
	int i = 0, j;
	const char *delim = " \t\r\n\v\f";
	char *token = NULL;

	token = strtok(buff, delim);
	while (token)
	{
		if (arr[i])
		{
			free(arr[i]);
		}
		arr[i] = malloc(sizeof(char) * (strlen(token) + 100));
		if (!arr[i])
		{
			fprintf(stderr, "Error: malloc failed");
			exit(EXIT_FAILURE);
		}
		if (i != 2)
		{
			for (j = 0; token[j] != '\0'; j++)
				arr[i][j] = token[j];
			arr[i][j] = '\0';
		}
		i++;
		token = strtok(NULL, delim);
	}
	return (arr);
}

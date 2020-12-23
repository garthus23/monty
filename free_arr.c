#include "monty.h"

/**
 * free_arr - free an array
 * @arr: a 2D array
 * Return: Nothing
 **/

void free_arr(char **arr)
{
	int i;

	if (arr)
	{
		if (arr[0])
		{
			for (i = 0; i < 2; i++)
			{
				free(arr[i]);
			}
		}
		free(arr);
	}
}

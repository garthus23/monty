#include "monty.h"

int main(int argc, char** argv)
{
	int i, j;
	char c;
	char buff[256];
	extern char **arr;
	FILE *fptr = NULL;


	j = 0;
	if (argc == 2)
	{
		if ((fptr = fopen(argv[1],"r")) != NULL)
		{
			arr = malloc(sizeof(char*) * 3);
			for (i = 0; i < 3; i++) 
    				arr[i] = NULL;
			c = fgetc(fptr); 
			while (c != EOF)
			{
				i = 0;
				while (c != '\n')
				{
					buff[i] = c;
					c = fgetc(fptr);
					i++;
				}
				buff[i] = '\0';
				j++;
				string_to_array(arr, buff);
				printf("%s", arr[0]);
				printf("%s", arr[1]);
//				call_opcode(arr, j);
				c = fgetc(fptr);
			}
			fclose(fptr); 
			free_arr(arr);
		}
		else
		{
			printf("On arrive pas a ouvrir ton fichier\n");
		}
	}	
	return (0);
}

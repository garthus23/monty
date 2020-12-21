#include "monty.h"


int main(char** argc, char** argv)
{
	char c;
	FILE *fptr;

	if ((fptr = fopen(argv[1],"r")) != NULL)
	{
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
  
		fclose(fptr); 
	}
	else
	{
		printf("On arrive pas a ouvrir ton fichier\n");
	}
	return (0);
}

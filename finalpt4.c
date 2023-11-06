/*Crystal Wolf
X00512932
Final Project pt4- Dynamic memory management
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	int stuff = 5; //sets stuff = 5
	int *ptr; //pointer

	ptr = (int*)malloc(stuff *sizeof(int));

	if (ptr == NULL)
	{

		printf("Mem can't be allocated :("); //used if the ptr is NULL and tells the user the mem can't be allocated
		return 0;

	}

	printf("Mem Allocated; \n"); 
	for (int i = 0; i < stuff; i++)
	{

		printf("%p\n", ptr + i); //shows what isallocated already

	}

	stuff = 10;
	ptr = realloc(ptr, stuff *sizeof(int)); //adds to the me to make the allocation go from 5 to 10

	printf("New Mem Allocated:\n");

	for (int i = 0; i < stuff; i++)
	{

		printf("%p\n", ptr + i); //prints the new allocated mem

	}

	printf("Please enter int: \n"); //lets user input

	for (int i = 0; i < stuff; i++)
	{

		scanf("%d\n", ptr + i);

	}

	printf("You entered: \n");

	for (int i = 0; i < stuff; i++)
	{

		printf("%d\n", *(ptr +i));

	}

	return 0;

	free(ptr);

}
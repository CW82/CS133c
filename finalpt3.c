/*Crystal Wolf
X00512932
Final Project pt3- 2d arrays, array of pointers, and array of strings
*/

//pt1
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int show[2][3]; //declares the 2d array

	int a, b;

	//counts for the loop
	for (a = 0; a < 2; a++);
	{
		for(b = 0; b < 3; b++)
		{

			printf("Please enter a value to show [%d][%d]:", a, b);
			scanf("%d", &show[a][b]);

		}
	}

	//displays the users input
	printf("Your elements are: \n");
	for (a = 0; a < 2; a++)
	{

		for (b = 0; b < 3; b++)
		{

			printf("%d", show[a][b]);
			if (b == 2)
			{

				printf("\n");

			}

		}

	}
 
    return 0;
}*/

//pt2
/*#include <stdio.h>

int main(void)
{

	int *ptrarr[10];
	int a = 1, b = 34, c = 85, d = 2, e = 56, f = 90, g = 12, h = 5, i = 7, j =41;

	ptrarr[0] = &a;
	ptrarr[1] = &b;
	ptrarr[2] = &c;
	ptrarr[3] = &d;
	ptrarr[4] = &e;
	ptrarr[5] = &f;
	ptrarr[6] = &g;
	ptrarr[7] = &h;
	ptrarr[8] = &i;
	ptrarr[9] = &j;

	for (int i = 0; i < 10; i++)
	{

		printf("The int %d has the mem address of %d\n", *ptrarr[i], ptrarr[i]);

	}

	return 0;

}*/

//pt3
/*#include <stdio.h>
#include <string.h>
#define amt_of 5 //defines for below so I don't have to later
#define length 50

int main()
{

	char band[10]; //char called band that's 10 long
	char array[amt_of][length] = {"BTS", "\nStray Kids", "\nGOT7", "\nNCT", "\nEXO"}; //char called array using the #defines above with a list of 5
 
	printf("What woud you like to change the first str to?: "); //asks user for a string to change the first item in the list to
	gets(band);

	strcpy(array[0], (band)); //copies it to the first part of the array

	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{

		printf("%s", array[i]);

	}

	return 0;

}*/

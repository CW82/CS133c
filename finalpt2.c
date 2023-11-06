/*Crystal Wolf
X00512932
Final Project pt1. This program will demonstrait macro and user io and file io*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	FILE *fp;
	fp = fopen("final.txt", "w"); //this opens up the file to write in

	char usr_inp[200]; //makes a char variable called usr_inp that’s 200 long
	printf("What would you like to write in the file?: "); //makes a char variable called usr_inp that’s 200 
	gets(usr_inp); //saves it

	fprintf(fp, "%s", usr_inp);

	fclose(fp); //closes the file

	return 0;

}
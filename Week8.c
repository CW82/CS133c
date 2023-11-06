/*Crystal Wolf
X00512932
11-16-22
This program will be an extension of the student record management system. 
It'll write (save) student records to a text file and read the student records
from the saved file to the list.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>


struct student
{

      int no;
      char name[30];
      double gpa;
      char temp;

}

main()
{

	printf("*******Welcome to the Student Record Management System*******\n");
	printf("*                     1: Add Record                         *\n");
	printf("*                     2: Display                            *\n");
	printf("*                     3: Show Menu                          *\n");
	printf("*                     4: Search                             *\n");
	printf("*                     5: Delete ALL Records                 *\n");
	printf("*                     6: Quit                               *\n");
    printf("*                     7: Save to Text File                  *\n");
    printf("*                     8: Read From Text File                *\n");
	printf("*************************************************************\n");
	printf("\n\n");

  struct student s[60];
	int i, usr_inp;
    FILE *fp;
    fp = fopen("student.txt", "w");

	printf("   ````````````````Please Select An Option````````````````\n");
	scanf("%d", &usr_inp);

	if (usr_inp == 1)
	{

		for (i = 0; i<3; i++)
    {

		printf("\n\n");
		printf("   ~~~~~~~~~~~~~~~~Enter the Students Details~~~~~~~~~~~~~~~~\n%d", i+0 );
        printf("\nStudent ID Number: ");
        scanf("%d", &s[i].no);
        scanf("%c", &s[i].temp);

        printf("\nStudent Name: ");
        gets(s[i].name);

        printf("\nStudent GPA: ");
        scanf("%lf", &s[i].gpa);
        fwrite(&s[i], sizeof(s[i]),1,fp);

      }

      fclose (fp);
      fp = fopen("student.txt", "r");

      printf("\nWhat would you like to do now? (select another option): \n");
      scanf("%d", &usr_inp);

      fclose(fp);
      getch();

	}

	if (usr_inp == 2)
	{

     for (i = 0; i<3; i++)
      {

		printf("\n\n");
        printf("   ````````````````Details for the Student are: ````````````````", i+0);

        fread (&s[i], sizeof (s[i]),1,fp);
        printf("\nThe Student Number is: %d", s[i].no);

        printf("\nThe Student Name is: %s", s[i].name);

        printf("\nThe Student GPA is: %lf", s[i].gpa);

      }

      fclose (fp);
      fp = fopen("student.txt", "r");

      printf("\nWhat would you like to do now? (select another option): \n");
      scanf("%d", &usr_inp);

      fclose(fp);
      getch();


	}

  if (usr_inp == 3)
  {

    printf("*******Welcome to the Student Record Management System*******\n");
	printf("*                     1: Add Record                         *\n");
	printf("*                     2: Display                            *\n");
	printf("*                     3: Show Menu                          *\n");
    printf("*                     4: Search                             *\n");
	printf("*                     5: Delete ALL Records                 *\n");
	printf("*                     6: Quit                               *\n");
    printf("*                     7: Save to Text File                  *\n");
    printf("*                     8: Read From Text File                *\n");
	printf("*************************************************************\n");
	printf("\n\n");

    printf("\nWhat would you like to do now? (select another option): \n");
    scanf("%d", &usr_inp);

  }

  if (usr_inp == 4)
  {

	printf("Please enter student ID number: ");

  }

  if (usr_inp == 5)
  {

    printf("Please enter student ID number to delete: ");

  }

  if (usr_inp == 6)
  {
    
    printf("Thank you, good bye!");

  }

  if (usr_inp == 7)
  {

	#define save 100

	char savetxt[save];
	bool keep = true;
	FILE *fh;

	fh = fopen("StudentRecords.txt", "w");

	if (fh == NULL)
	{
		printf("Cant open file. \n");
		exit (1);
	}

	printf("Please enter student Name, number, and gpa, seperated by a comma: ");


	while (keep)
	{		
		fgets(savetxt, save, stdin);

		if (strcmp(savetxt, "quit\n")==0)
			keep = false;
		else fputs(savetxt, fh);

	}

	fclose(fh);

  }

  if (usr_inp == 8)
  {

	
    FILE* ptr;
    char ch;
    ptr = fopen("StudentRecords.txt", "r");
 
    if (NULL == ptr) {
        printf("This file can't be opened \n");
    }
 
    printf("The content of this file are \n");
 
    while (!feof(ptr)) {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);

  }

}

/*1) Write (save) the Student Records to a text file
 ("student_records.txt").
2) Read the Student Records from the previously saved 
text file to the list.
Note: don't forget to add the new function prototypes 
in the header file.*/
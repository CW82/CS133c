/*Crystal Wolf
X00512932
11-16-22
This program will be a student record management system. It will show a menu, insert a record, search for a record, delete a record,
display a record, and quit. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

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
	printf("*                     2: Search by ID                       *\n");
	printf("*                     3: Delete All Records                 *\n");
	printf("*                     4: Display All Records                *\n");
	printf("*                     5: Show Menu                          *\n");
	printf("*                     6: Quit                               *\n");
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

		for (i = 0; i<1; i++)
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

      for (i = 0; i<1; i++)
      {

		printf("\n\n");
        printf("   ````````````````Details for the Student are: ````````````````", i+0);

        fread (&s[i], sizeof (s[i]),1,fp);
        printf("\nThe Student Number is: %d", s[i].no);

        printf("\nThe Student Name is: %s", s[i].name);

        printf("\nThe Student GPA is: %lf", s[i].gpa);

      }

      fclose(fp);
      getch();

	}

	if (usr_inp == 2)
	{



	}

}
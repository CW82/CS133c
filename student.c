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
	printf("*                     2: Display                            *\n");
	printf("*                     3: Show Menu                          *\n");
	printf("*                     4: Search                             *\n");
	printf("*                     5: Delete ALL Records                 *\n");
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
	  printf("*************************************************************\n");
	  printf("\n\n");

    printf("\nWhat would you like to do now? (select another option): \n");
    scanf("%d", &usr_inp);

  }

  if (usr_inp == 4)
  {

    //Idk how I would search through what I have. 
    //

  }

  if (usr_inp == 5)
  {

    //i also cant figure this out sorry

  }

  if (usr_inp == 6)
  {
    
    printf("Thank you, good bye!");

  }

}
/*Crystal Wolf
10-25-22
This program will accept user input ( a string ) and will calculate the Coleman-Liau Index of
the users inputed string and print the users score.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void){

	//variables 
	int i = 0, letters = 0, words = 0, sentences = 0; //sets variables to 0
	char user_input[200];

	//asks the user for input
	printf("Please enter your string: ");
	gets(user_input);

	//counts the amount of letters, words, and sentences are in the users stirng. 
	for(i=0;user_input[i]!='\0';i++)
    {
        if(user_input[i]=='.'||user_input[i]=='!'||user_input[i]=='?') //
        {       sentences++;
				//words++;
        }
        else if(user_input[i]==' '||user_input[i]==',')
                words++;
        else if(user_input[i]>65&&user_input[i]<123)
                letters++;
        }
        
		//prints out letters, words, and sentences
		printf("\nLetters: %d",letters); //not counting spaces
		printf("\nWords: %d", words);
        printf("\nSentences: %d\n",sentences);

	//formula for calculating the users grade
	words = words + 1;

	float L_var = ((float)letters / (float)words) * 100;
	float S_var = ((float)sentences / (float)words) * 100;
	float grade = 0.0588 * L_var - 0.296 * S_var - 15.8;
	int final_grade = round(grade);
	printf("Score: %f", grade);

	if (final_grade <= 1)
	{
		printf("\nBefore Grade 1");
	}
	else if (grade < 16)
	{
		printf("\nYour grade is: %d", final_grade);
	}
	else 
	{
		printf("\nYour grade is 16+");
	}
	

}





/*Crystal Wolf
X00512932
Final Project pt1- This program will demonstrate the use of #define macros by finding the area of a circle
area of a circle = pi*r^2*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define pi 3.14159265 //this defined the variable pi so I could use it later in the program


int main()
{

	float rad, are; //these are my variables that are used down below

	printf("What is the raidus of your circle?: "); //this asks for user input
	scanf("%f", &rad); //this saves the user input

	are = pi*(pow(2, rad)); //this makes a new variable called are (area) and uses the defined pi variable from above to make the equation for the area of a circlr

	printf("\nThe area of your circle is: %f", are); //this prints out the area of the circle after it has been calculated

	return 0;

}

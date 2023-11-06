/*Crystal Wolf
X00512932
Final Project pt5- Struct within a struct. This program gives details about the band Stray Kids
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//depedent struc, used inside my main function
struct band
{
  int band_members;
  char nameofband[20];
  int yearformed;
};
  
//outer struct
struct recordlable 
{
  char name[20];
  char ceo[20];
	//struct var
  struct band bd; 
};


int main()
{
	//struct var
  struct recordlable rl; 
    
  rl.bd.band_members = 9;

  strcpy(rl.name, "JYP Entertainment");

  rl.bd.yearformed = 2018;

  strcpy(rl.ceo,"Jung Wook");

  strcpy(rl.bd.nameofband, "Stray Kids");
    
    
//prints the deatils nicly
  printf("Record Lable Name: %s\n", rl.name);  

  printf("Record Lable's CEO: %s\n", rl.ceo); 

  printf("Name of Band: %s\n", rl.bd.nameofband); 

  printf("Number of Members: %d\n", rl.bd.band_members);  

  printf("The Year the Band Formed: %d\n", rl.bd.yearformed);  
}




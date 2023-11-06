/*Crystal Wolf
10-31-22
X00512932
This program will let the user input 3 numbers and then print them out from smallest to largest using pointers*/

#include <stdio.h> 
 
void sort(int *arr, int length) 
{ 
    int i, j; 
     
    for(i=0; i<length; i++) {     //for loop for pointer to acess all 3 integers
        for(j=i+1; j<length; j++) { 
            if(arr[i] > arr[j]) { 
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
} 
 
void print(int *arr, int length) 
{ 
    int i; 
    // prints the numbers from smallest to largest 
    printf("Your numbers smallest to largest are: \n"); //
    for(i=0; i<length; i++) { 
        printf("%d ", *(arr + i)); 
    } 
     
} 
 
int main() 
{ 
    int numbers[3], i; 
    int length = *(&numbers + 1) - numbers; 
     
    for(i=0; i<length; i++) { 
        printf("Please enter number (click enter each time): ", i+1); //up by one and asks user for input
        scanf("%d", &numbers[i]); 
    } 
     
    sort(numbers, length); 
     
    print(numbers, length); 
     
    return 0; 
} 



//

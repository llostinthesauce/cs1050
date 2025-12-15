//////////////////////////
//CS 1050
//LAB 9
// 
//April 7, 2023
//////////////////////////

#include <stdio.h>
#include <string.h> //header files

int getInt //funciton that gets the int between 1 and 5 to be used later
{
    int swap;

    do {
        printf("Enter a swap distance: ");
        scanf("%d", &swap); }
    while (swap <= 1 || swap >= 5);
    {
        return swap;
    }
}

void getString(char * a) //function that gets the string from the user with parameters
{
    do {
        printf("Enter a string between 20 and 40 characters: ");
        scanf("%40s", a); }
    while (strlen(a) <= 20 || strlen(a) >= 40);

    printf("You entered: %s\n", a);
}

void swapString (char * a, int n) //function that swaps string with int (i am aware this is not working properly) 
{
    int length = strlen(a);
    n = 2;

    for (int i = 0; i < length - n; i += n)
    {
        char temp = a[i];
        a[i] = a[i+n];
        a[i+n] = temp;
    }

    printf("manipulated string is: %s\n", a);
}

///////////////////////////////////////////

int main(void)
{
    printf("Welcome to Lab 9!\n"); //main just calls all three functions and terminates

    char a[40];
    int n = 0;

    getString(a);
    getInt;
    swapString(a,n);

    printf("Thanks for doing lab 9\n");

}

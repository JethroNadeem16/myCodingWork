#include <stdio.h>
#include <stdlib.h>

int main(){
    int elements[5]; //Declaring and initializing 5 integer elements
    elements[0] = 5;
    elements[1] = 10;
    elements[2] = 15;
    elements[3] = 20;
    elements[4] = 25;
    printf("The 5 integer elements are:\n");
    printf("\t- %d\n\t- %d\n\t- %d\n\t- %d\n\t- %d\n", elements[0], elements[1], elements[2], elements[3], elements[4]); //Using one printf statement to display it all 

    float decimal[3] = {2.25, 5.87, 8.99}; //All 3 integers in one line using curvy brackets and commas
    printf("My 3 decimal integers are: \n");
    printf("\t- %.2f\n\t- %.2f\n\t- %.2f\n", decimal[0], decimal[1], decimal[2]);
    decimal[0] = decimal[0] * 2.2; //Applying a different multiplacation arithmetic to each element giving a before and after change
    decimal[1] = decimal[1] * 1.7;
    decimal[2] = decimal[2] * 1.1;
    printf("My 3 decimal integers after the arithmetic update is: \n");
    printf("\t- %.2f\n\t- %.2f\n\t- %.2f\n", decimal[0], decimal[1], decimal[2]);

    char name[13]; //13 character spaces for my full name plus the space
    printf("What is your full name?\n");
    printf("Please enter your first and last name seperated by a space.\n");
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c", &name[0], &name[1], &name[2], &name[3], &name[4], &name[5], &name[6], &name[7], &name[8], &name[9], &name[10], &name[11], &name[12]); //Long tedious way to get whole name into one line without having to having to enter each letter seperatly.
    printf("Your name is %c%c%c%c%c%c%c%c%c%c%c%c%c\n", name[0], name[1], name[2], name[3], name[4], name[5], name[6], name[7], name[8], name[9], name[10], name[11], name[12]); //Tedious way to display name onto one line


    return 0;
}

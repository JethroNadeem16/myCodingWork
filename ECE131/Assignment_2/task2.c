#include <stdio.h>

int main(){
    int month, day, year;
    char dummy;

    printf("When is your birthdate (Seperated by dash)?\n"); //Asking for birthday
    scanf("%d%d%d%c", &month, &day, &year, &dummy); //Seperating the month, day, and year
    printf("Your birthday is:%d%d%d\n", month, day, year); //Prints out birthday that has been recieved

    int AR, mi, ed;

    printf("What is your phone number (Including Area Code, Seperated by dash)?\n"); //Asking for number
    scanf("%d%d%d%c", &AR, &mi, &ed, &dummy); //Seperating each section of the number
    printf("Your number is:%d%d%d\n", AR, mi, ed); //Prints out number that has been recieved


    return 0;

}

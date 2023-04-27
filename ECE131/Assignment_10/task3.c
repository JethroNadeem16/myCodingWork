#include <stdio.h>

struct birthday{ //making structure with 3 members all related to birthday
    int month; 
    int day;
    int year;
};

int main(){
    struct birthday friend1, friend2; //defining structure
    char z; //dummy
    
    //manually initializing 
    friend1.month = 12;
    friend1.day = 31;
    friend1.year = 2002;
    printf("The date of friend 1's birthday is: %d-%d-%d\n", friend1.month, friend1.day, friend1.year);
    
    //initializing by asking user
    printf("\nCan you provide the date of friend 2's birthday:\n");
    printf("Date of the month: ");
    scanf("%d%c", &friend2.month, &z);
    printf("Date of the day: ");
    scanf("%d%c", &friend2.day, &z);
    printf("Date of the year: ");
    scanf("%d%c", &friend2.year, &z);
    printf("The date of friend 2's birthday is: %d-%d-%d\n", friend2.month, friend2.day, friend2.year);

    return 0;
}

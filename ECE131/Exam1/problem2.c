#include <stdio.h>
#include <stdlib.h>

int main(){
    int age, yoe, s;
    char dummy;
    printf("How old are you?\n");
    scanf("%d%c", &age, &dummy);
    if(age > 0 && age < 18){
        printf("Sorry, you are not old enough to be hired.\n");
        exit(0);
    }else if(age >= 80 && age < 130){
        printf("Sorry, you are too old to be working.\n");
        exit(0);
    }else if(age >= 18 && age < 80){
        printf("Alright, you seem to be of valid age.\n");
    }else{
        printf("Error! Inputted age seems wrong.\n");
        exit(0);
    }
    printf("How many years of experience do you have?\n");
    scanf("%d%c", &yoe, &dummy);
    printf("What is your salary?\n");
    scanf("%d%c", &s, &dummy);
    printf("So you have %d years of experience.\n", yoe);
    printf("And your salary is $%d.\n", s);
    if(yoe <= 0){
        printf("Sorry you need at least 1 year minimum experience to be hired.\n");
        exit(0);
    }else if(s < 0){
        printf("No salary, really?.\n");
        exit(0);
    }else if(s > 75000){
        printf("We can't afford to pay you.\n");
        exit(0);
    }
    if(age >= 18 && yoe >= 1 && yoe < 3 && s > 0 && s <= 55000){
        printf("Great, we're willing to hire and pay you.\n");
    }else if(age >= 18 && yoe >= 3 && s <= 75000){
        printf("Awesome, we are willing to hire and pay you.\n");
    }else{
        printf("Error! Something went wrong.\n");
    }

    return 0;
}

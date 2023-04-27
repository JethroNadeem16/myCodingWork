#include <stdio.h>
#include <stdlib.h>

int main(){
    int c, pop, sum; //county, population, total population
    char dummy;
    printf("How many counties are there?\n");
    scanf("%d%c", &c, &dummy); //saving inputted county number into variable
    int p[c]; //setting array to number of counties inputted
    for(int n = 0; n < c; n++){ //new variable to put a number on each county
        printf("What is the population number for county %d\n", n + 1); // add up a number each time a county population is inputted
        scanf("%d%c", &pop, &dummy); //saving population number for that specific countyg
        if(pop < 0 || pop > 1000000000){ //fail safe if county population is invalid if it's below 0 or above 1 billion
            printf("Error! Invalid population number.\n");
            exit(0); //stops program if invalid population is inputted
        }
        p[n] = pop; //each county number has their specific population
        sum += pop; //adds total population number that was coming from the loop that was inputted
    }
    for(int i = 0; i < c; i++){ //printing out respective population to their county
        printf("County %d: %d\n", i + 1, p[i]);
    }
    printf("Total population: %d\n", sum); //prints out the total population for the populations of each county

    return 0;
}

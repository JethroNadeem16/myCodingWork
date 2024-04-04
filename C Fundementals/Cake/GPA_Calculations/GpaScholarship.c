#include <stdio.h>
#include <stdlib.h>

void err_und0(){ //creating new error function for input below 0.0
    printf("Error! Input below 0.0\n");
    return;
}
void err_abv4(){ //creating new error function for input above 4.0
    printf("Error! Input above 4.0\n");
    return;
}
int main(){
    float gpa;
    char dummy;
    printf("What is your GPA?\n");
    scanf("%f%c", &gpa, &dummy); //Recording gpa input
    printf("The GPA you've inputted is: %.1f\n", gpa);
    
    if(gpa < 0.0){
        err_und0(); //calling down void function
        exit(0); //stops program if it's below 0.0
    }
    if(gpa > 4.0){
        err_abv4(); //calling down void function
        exit(0); //stops program if its above 4.0
    }

    if(gpa >= 0.0 && gpa < 2.0){ //Declaring low gpa first
        printf("No scholorship available for this low gpa.\n");
    }else if(gpa >= 2.0 && gpa < 3.0){ //Putting in low scholorship if inputted certain gpa
        printf("You are eligable for the low New Mexico Scholorship.\n");
    }else if(gpa >= 3.0 && gpa < 3.5){ //Schlorship for mid gpa after
        printf("You are eligable for the mid Outstanding Scholorship.\n");
    }else if(gpa >= 3.5 && gpa <= 4.0){ //Lastly putting in scholorship for high gpa
        printf("You are eligable for the high Lobos Scholorship.\n");
    }
 

    return 0;
}

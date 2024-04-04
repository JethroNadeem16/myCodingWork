#include <stdio.h>

int main(){
    double gpa;
    char dummy;

    printf("What is your GPA?\n");
    scanf("%lf%c", &gpa, &dummy); //Recording gpa inputted
    printf("The GPA you inputted is: %.1lf\n", gpa);

    if(gpa >= 0.0 && gpa < 2.0){ //Declaring what you get with low gpa first
        printf("No scholorship available for this low gpa.\n");
    }else if(gpa >= 2.0 && gpa < 3.0){ //Putting in low scholorship if inputted certain gpa
        printf("You are eligable for the low New Mexico Scholorship.\n");
    }else if(gpa >= 3.0 && gpa < 3.5){ //Schlorship for mid gpa after
        printf("You are eligable for the mid Outstanding Scholorship.\n");
    }else if(gpa >= 3.5 && gpa <= 4.0){ //Lastly putting in scholorship for high gpa
        printf("You are eligable for the high Lobos Scholorship.\n");
    }else{ //Anything above doesn't work, resort to this cuz there shouldn't be other possiblities
        printf("ERROR! The GPA you have entered is invalid.\n");
    }



    return 0;
}

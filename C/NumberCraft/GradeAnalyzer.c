#include <stdio.h>
#include <stdlib.h>

int main(){
    int people, grade;
    char dummy;
    printf("How many students are there in your class?\n");
    scanf("%d%c", &people, &dummy);
    if(people < 0 || people >= 70){ //Putting if statement so invalid input of students cuts code
        printf("Number of students should be invalid.\n"); //70 students seems overkill amount of students
        exit(0);
    }else if(people == 0){ //Puts statement for no students
        printf("So you don't have students?\n");
        exit(0);
    }
    printf("So you have %d students in your class.\n", people);

    int p = 0; //A count for each student when listing their grades
    while(p < people){
        printf("What is person %d's grade (out of 100)?\n", p+1); //Letting them know to input numeric value for grade 
        scanf("%d%c", &grade, &dummy);
        p++;
        if(grade < 0 || grade > 100){ //Anthing below 0 and above 100 cuts code for that grade shouldn't have been inputted
            printf("That grade is not possible. Please input valid grade.\n");
            break;
        }else if(grade < 60){ //Listing numberic grade responses
            printf("So you're failing class.\n");
        }else if(grade < 70){
            printf("Barely passing, but not looking good.\n");
        }else if(grade < 80){
            printf("Pretty average.\n");
        }else if(grade < 90){
            printf("That's a good grade.\n");
        }else if(grade <= 100){
            printf("You're doing great in class.\n");
        }else{ // Anything not numeric inputted gets error message and breaks off code
            printf("Grade input is invalid. Please try again.\n");
            break;
        }
    }

    return 0;
}

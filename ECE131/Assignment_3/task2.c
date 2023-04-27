#include <stdio.h>

int main(){
    int total_students;
    int grade;
    float sum = 0;
    float numbers;
    float average;

    printf("How many students are in the class?\n");
    scanf("%d", &total_students); //calculating number you enter as total_students
    
    for(grade = 0; grade < total_students; grade++){
        printf("Enter each student's grade one by one: \n"); //prints statement with each students grade that needs to be added by the user
        scanf("%f", &numbers);
        sum += numbers; //add all the grades entered
    }
    
    average = sum/total_students; //calculates average

    printf("The Average of the class =  %.2f\n", average);

    return 0;
}

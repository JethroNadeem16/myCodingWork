#include <stdio.h>

struct course{
    float participation;
    float exam;
    float challenge;
    float assignment;
};

int main(){
    struct course ECE, math;
    char z;

    printf("ECE Course:\n");
    printf("Final Grade for Participation: ");
    scanf("%f%c", &ECE.participation, &z);
    printf("Final Grade for Exam: ");
    scanf("%f%c", &ECE.exam, &z);
    printf("Final Grade for Challenge: ");
    scanf("%f%c", &ECE.challenge, &z);
    printf("Final Grade for Assignment: ");
    scanf("%f%c", &ECE.assignment, &z);
    
    float final_grade = ECE.participation + ECE.exam + ECE.challenge + ECE.assignment;
    printf("After adding the grades of these different criteria, you have a final grade of: %.2f out of 100.00.\n", final_grade);


    printf("Math Course:\n");
    printf("Final Grade for Participation: ");
    scanf("%f%c", &math.participation, &z);
    printf("Final Grade for Exam: ");
    scanf("%f%c", &math.exam, &z);
    printf("Final Grade for Challenge: ");
    scanf("%f%c", &math.challenge, &z);
    printf("Final Grade for Assignment: ");
    scanf("%f%c", &math.assignment, &z);

    float final_grade2 = math.participation + math.exam + math.challenge + math.assignment;
    printf("After adding the grades of these different criteria, you have a final grade of: %.2f out of 100.00.\n", final_grade2);

    return 0;
}

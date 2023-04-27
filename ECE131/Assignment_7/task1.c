#include <stdio.h>
#include <stdlib.h>

int main(){
    int student, n;
    float average, sum;
    char z;
    printf("How many students do you have? ");
    scanf("%d%c", &student, &z);
    printf("So you have %d students.\n", student);

    char lgpa[student];
    int i;
    printf("Please enter their letter grade:\n");
    for(i = 0; i < student; i++){
        scanf("%c%c", &lgpa[i], &z);
        if((lgpa[i] < 65 || lgpa[i] > 68) && (lgpa[i] < 97 || lgpa[i] > 100)){
            if(lgpa[i] != 70 && lgpa[i] != 102){
                printf("Error! Your inputted grade letter is invalid.\n");
                exit(0);
            }
        }
    }
    float gpa[student];
    
    for(i = 0; i < student; i++){
        if(lgpa[i] == 'A' || lgpa[i] == 'a'){
            gpa[i] = 4.0;
        }
        if(lgpa[i] == 'B' || lgpa[i] == 'b'){
            gpa[i] = 3.0;
        }
        if(lgpa[i] == 'C' || lgpa[i] == 'c'){
            gpa[i] = 2.0;
        }
        if(lgpa[i] == 'D' || lgpa[i] == 'd'){
            gpa[i] = 1.0;
        }
        if(lgpa[i] == 'F' || lgpa[i] == 'f'){
            gpa[i] = 0.0;
        }
    }
    printf("\tGPA\n");
    for(n = 0; n < student; n++){
        printf("%c\n", lgpa[n]);
    }
    for(i = 0; i < student; i++){
        sum += gpa[i];
    }
    average = sum/student;
    printf("\nAverage of Class: %.2f\n", average);


    return 0;
}

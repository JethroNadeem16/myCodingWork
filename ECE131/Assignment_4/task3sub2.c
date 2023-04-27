#include <stdio.h>
#include <stdlib.h>

int main(){
    float gpa;
    char yn, dummy;

    printf("Would you like to say what your GPA is? [Y/N]\n");
    scanf("%c%c", &yn, &dummy);
    if(yn == 'Y'){
        printf("Alright then.\n");
    }else{
        printf("Okay then, that's fine.\n");
        exit(0);
    }

    printf("What is your GPA?\n");
    scanf("%f%c", &gpa, &dummy);

    if(gpa >= 0.0 && gpa <= 4.0){
        printf("Falls within the standard gpa range\n");
    }else{
        printf("That does not fall within the standard gpa range\n");
    }



    return 0;
}

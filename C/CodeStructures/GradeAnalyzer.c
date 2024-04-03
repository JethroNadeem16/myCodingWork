#include <stdio.h>

int main(){
    int i;
    float g;
    char z;
    
    printf("How many grades will you be submitting? ");
    scanf("%d%c", &i, &z);
    printf("Please input numeric grades out of 100...\n");
    for(int n = 0; n < i; n++){
        printf("Grade %d: ", n + 1);
        scanf("%f%c", &g, &z);
        if(g < 50){
            printf("You have failed. Good luck next time.\n");
        }else if(g < 70){
            printf("Not bad. You didn't fail, but you can do better next time.\n");
        }else if(g <= 100){
            printf("Awesome, you did great!\n");
        }else if(g > 100){
            printf("That is an invalid score.\n");
        }
    }


    return 0;
}

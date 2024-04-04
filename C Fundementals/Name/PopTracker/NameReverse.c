#include <stdio.h>

int main(){
    char name[13], dummy; //number of characters in my name plus dummy
    printf("Please enter each character for your name:\n");
    for(int n  = 0; n < 13; n++){ //Array naturally starts at 0 then counts down by 1 each time
        scanf("%c%c", &name[n], &dummy); // recording array letters
    }
    for(int i = 0; i < 13; i++){ //new variable for printing out in a single line rather than each letter in a different line
        printf("%c", name[i]);
    }
    printf("\n"); // giving room for result
    for(int i = 12; i <= 13 && i >= 0; i--){ //it's printing out backwards so it's from end to start along with setting up limitation of characters
        printf("%c", name[i]);
    }
    printf("\n"); //giving room for result

    return 0;
}

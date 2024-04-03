#include <stdio.h>
#include <ctype.h>

char z;

void breakup(char S[]){
    printf("The phrase is: ");
    int i = 0;
    while(1){
        printf("%c", S[i]);
        if(S[i] == '.' || S[i] == '\0'){
            printf("\n");
            break;
        }
        i++;
    }
    printf("\n");

    return;
}

int main(){
    char string[40];
    string[0] = 'H';
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = 'o';
    string[5] = '.';
    string[6] = 'T';
    string[7] = 'h';
    string[8] = 'e';
    string[9] = 'r';
    string[10] = 'e';
    string[11] = '.';
    string[12] = 'S';
    string[13] = 'i';
    string[14] = 'r';
    string[15] = '\0';

    breakup(string);

    return 0;
}

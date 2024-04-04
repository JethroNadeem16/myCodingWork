#include <stdio.h>
#include <ctype.h>

char z;

void upperstring(char S[]){
    printf("The upper case phrase is: ");
    int i = 0;
    while(1){
        printf("%c", toupper(S[i]));
        if(S[i] == '\0'){
            break;
        }
        i++;
    }
    printf("\n");

    return;
}

int main(){
    char string[40];
    string[0] = 'h';
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = 'o';
    string[5] = '\0';
    int i = 0;
    while(1){
        printf("%c", string[i]);
        if(string[i] == '\0'){
            break;
        }
        i++;
    }
    printf("\n");
    upperstring(string);


    return 0;
}

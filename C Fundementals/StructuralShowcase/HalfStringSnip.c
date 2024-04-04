#include <stdio.h>

int stg(char S[]){ //function for counting and printing half of string
    int i = 0;
    while(S[i] != '\0'){ //counting string loop
        i++;
    }
    printf("You have %d characters in your string\n", i);
    i = i/2; //setting new i variable for cutting number of characters counted in half
    printf("Your phrase that was cut in half is: ");
    while(1){ //printing new string that was cut in half with new i variable
        printf("%c", S[i]);
        if(S[i] == i){ //breaks when its less than or equal to half of string
            break;
        }
        i++;
    }
    printf("\n");

    return i;
}


int main(){
    int n; //length of phrase
    char z; //dummy

    printf("How long is your phrase?\n");
    scanf("%d%c", &n, &z);

    char phrase[n]; //array
    printf("Enter a phrase: ");
    int i = 0;
    while(1){ //scanning loop with with \n, white spaces, and \0
        scanf("%c", &z);
        if(z == '\n' || i >= n){ //stops at \n or given length
            break;
        }else{
            phrase[i] = z;
            i++;
        }
    }
    phrase[i] = '\0'; //equals to null character
    
    int string = stg(phrase); //calling down function

    return 0;
}

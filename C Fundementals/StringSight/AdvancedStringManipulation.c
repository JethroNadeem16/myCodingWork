#include <stdio.h>

void scan_info(int size, char array[]){ //same scan function in task1
    char z;
    printf("What is the string: ");
    int i = 0;
    while(1){
        scanf("%c", &z);
        if(z == '\n' || i >= size){
            break;
        }else{
            array[i] = z;
            i++;    
        }
        
    }
    array[i] = '\0';

    return;
}

void print_info(char A[]){ //same print function in task1
    printf("The string that was printed is: ");
    int i = 0;
    while(1){
        printf("%c", A[i]);
        if(A[i] == '\0'){
            break;
        }
        i++;
    }
    printf("\n");
    return;
}

int total_char(char S[]){ //same as task2
    int i = 0;
    while(S[i] != '\0'){
        i++;
    }
    return i;
}

char char_num(char ST[]){ //same as task 2
    char m;
    int c = 0, r = 0;
    
    printf("\nWhat character are you interested in (1)counting, (2)removing in your string? ");
    scanf(" %c", &m);
    while(ST[c] != '\0'){
        if(ST[c] == m){
            r++;
        }
        c++;
    }
    printf("You are using %d characters for '%c' in your string.", r, m);

    return m;
}

void rm_char(char C, char SG[]){ //removing character function
    int rc = 0; //chosen removal character counter
    char z;
    printf("\nNew character is: ");
    while(SG[rc] != '\0'){ //proceeds to remove counter
        if(SG[rc] == C){
            rc++;
        }else{
            z = SG[rc];
            printf("%c", z);
            rc++;
        }
    }
    printf("\n");

    return;
}

int main(){ //same as in task 1 and 2
    int n; 
    char z;

    printf("How many characters do you estimate to have in your string? ");
    scanf("%d%c", &n, &z);

    char string[n];
    scan_info(n, string);
    print_info(string);
    int num_char = total_char(string);
    printf("The total amount of characters you have in your string is: %d", num_char);
    char cn = char_num(string); //This for counting picked character
    char cs = char_num(string); //Repeats the char_num function but for picking the removing picked character
    rm_char(cs, string); //pulling down the removing character function with the picked character choice from the counting character function
    
    //Side note: When going over the character limit you set, the scanning counter for the removal and counting character sometimes skips. Not all the time, sometimes it skips all the way, or just to the removal one, and sometimes just doesn't skip at all. Don't know how to fix that but it still works.

    return 0;
}

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

int total_char(char S[]){ //Total amount of characters
    int i = 0;
    while(S[i] != '\0'){
        i++;
    }
    return i;
}

char char_num(char ST[]){
    char m; //for the character the user inputs
    int c = 0, r = 0; //one for counting, one for response
    
    printf("\nWhat character are you interested in counting in your string? ");
    scanf(" %c", &m);
    while(ST[c] != '\0'){
        if(ST[c] == m){
            r++;
        }
        c++;
    }
    printf("You are using %d characters for '%c' in your string.\n", r, m);

    return m;
}

int main(){ //same as in task 1
    int n; 
    char z;

    printf("How many characters do you estimate to have in your string? ");
    scanf("%d%c", &n, &z);

    char string[n];
    scan_info(n, string);
    print_info(string);
    int num_char = total_char(string); //pulling down total char num function
    printf("The total amount of characters you have in your string is: %d", num_char);
    char cn = char_num(string); //pulling down character counting function.. didn't know how to send character input in main back into function so I did it in the function

    return 0;
}

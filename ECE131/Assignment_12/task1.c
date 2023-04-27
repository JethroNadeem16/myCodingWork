#include <stdio.h>

void scan_info(int size, char array[]){ //scan function with number of characters and the character array
    char z; //dummy, not global because it could cause problems
    printf("What is the string: ");
    int i = 0;
    while(1){
        scanf("%c", &z); //scans
        if(z == '\n' || i >= size){ //if it equals enter or goes beyond the size given then it'll stob
            break;
        }else{ 
            array[i] = z;
            i++;    
        }
        
    }
    array[i] = '\0'; //ends with null character
    return;
}

void print_info(char A[]){ //prints out array that was scanned
    printf("The string that was printed is: ");
    int i = 0;
    while(1){
        printf("%c", A[i]);
        if(A[i] == '\0'){ //stops at null character
            break;
        }
        i++;
    }
    printf("\n"); //give the printed value a line of its own
    return;
}

int main(){
    int n;
    char z;
    printf("How many characters do you estimate to have in your string? ");
    scanf("%d%c", &n, &z); //scanning for size of string

    char string[n]; //size of string array
    scan_info(n, string); //calling scan function with size and characters for string
    print_info(string); //calling print function with size and characters for string
    
    return 0;
}

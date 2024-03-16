#include <stdio.h>

int main(){
    char name[50] = "Shoaib Nadeem";
    int i = 0;
    while(name[i] != '\0'){
        i++;
    }
    printf("You have %d number of characters\n", i);
    printf("Original Full-Name: ");
    i = 0;
    while(1){
        printf("%c", name[i]);
        if(name[i] == '\0'){
            break;
        }
        i++;
    }
    printf("\n");
    printf("Reversed Full-Name: ");
    i = 0;
    while(1){
        printf("%c", name[i]);
        if(name[i] == '\0'){
            break;
        }
        i--;
    }
    printf("\n");

    return 0;
}

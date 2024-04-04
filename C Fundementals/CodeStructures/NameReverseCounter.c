#include <stdio.h>

int main(){
    char name[50] = "Shoaib Nadeem";
    int i = 0;
    while(name[i] != '\0'){
        i++;
    }
    printf("You have %d number of characters\n", i);
    printf("Original Full-Name: %s\n", name);
    
    printf("\n");
    printf("Reversed Full-Name: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%c", name[j]);
    }
    printf("\n");

    return 0;
}

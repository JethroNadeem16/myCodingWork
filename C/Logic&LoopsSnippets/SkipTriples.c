#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    printf("Multiples of 3:\n");
    while(i < 90){
        if(i >= 30 && i < 60){
            i += 30;
        }else{
            i += 3;
        }
            printf("\t%d\n", i);
    }


    return 0;
}

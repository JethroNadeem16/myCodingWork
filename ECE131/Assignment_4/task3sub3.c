#include <stdio.h>

int main(){
    char dl, dummy;

    printf("Do you like dark theme or light theme better? [D/L]\n");
    scanf("%c%c", &dl, &dummy);
    if(dl == 'D'){
        printf("Dark theme. Nice.\n");
    }else if(dl == 'L'){
        printf("Light theme. Okay.\n");
    }else{
        printf("What neither of those options? What else is there?\n");
    }



    return 0;
}

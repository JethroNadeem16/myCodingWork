#include <stdio.h>

char z; //global variable dummy 

struct coffee{ //stucture members
    int calories;
    float price;
    char name[20];
};

int main(){
    struct coffee coffee1, coffee2; //2 structure variables
    //Manual initializing info
    coffee1.price = 3.25;
    coffee1.calories = 160;
    coffee1.name[0] = 'F';
    coffee1.name[1] = 'r';
    coffee1.name[2] = 'a';
    coffee1.name[3] = 'p';
    coffee1.name[4] = 'p';
    coffee1.name[5] = 'u';
    coffee1.name[6] = 'c';
    coffee1.name[7] = 'c';
    coffee1.name[8] = 'i';
    coffee1.name[9] = 'n';
    coffee1.name[10] = 'o';
    coffee1.name[11] = '\n';
    //Printing manual inputted info
    printf("Coffee 1:\n");
    printf("The price of the coffee is: $%.2f\n", coffee1.price);
    printf("The coffee has %d calories.\n", coffee1.calories);
    printf("The specific name of the coffee is: ");
    int i = 0;
    while(1){ //using loop for all of char name can be printed in one line
        printf("%c", coffee1.name[i]);
        i++;
        if(coffee1.name[i] == '\n'){
            break; //making sure it doesn't loop forever
        }
    }
    printf("\n"); //space in between coffee 1 and 2
    //Scan coffee 2 info
    printf("\nCoffee 2:\n");
    printf("What is the price of this coffee?\n");
    scanf("%f%c", &coffee2.price, &z);
    printf("How many calories does this coffee have?\n");
    scanf("%d%c", &coffee2.calories, &z);
    printf("What is the name of this coffee? ");

    i = 0;
    while(1){ //using loop so user can input character all in one line
        scanf("%c", &z);
        coffee2.name[i] = z;
        if(z == '\n'){
            break; //no infinite loop
        }else if(i >= 24){ //anything past 24 letters will be cut off
            coffee2.name[i] = '\n';
            break;
        }
        i++;
    }
    printf("\n"); //space in between coffee 2 scan and print
    printf("Coffee 2 info:\n");
    printf("- Price: $%.2f\n", coffee2.price);
    printf("- Calories: %d calories\n", coffee2.calories);
    printf("- Coffee Name: ");
    i = 0;
    while(1){ //print name of coffee all in one line
        printf("%c", coffee2.name[i]);
        if(coffee2.name[i] == '\n'){
            break; //No loop
        }
        i++;
    }

    return 0;
}

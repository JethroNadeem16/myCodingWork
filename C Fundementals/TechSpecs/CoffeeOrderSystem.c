#include <stdio.h>

char z; //dummy

struct coffee{ //coffee structures with more members
    int calories;
    float price;
    char name[25];
    int shots;
    char milk[25];
};

struct coffee scan_info(int coff_num){ //scan function for inputted info by user for sturctures
    struct coffee coffee1; 
    //scan info
    printf("Coffee %d:\n", coff_num); //adding specific number to each order
    printf("What is the price of this coffee? ");
    scanf("%f%c", &coffee1.price, &z);
    printf("How many calories does this coffee have? ");
    scanf("%d%c", &coffee1.calories, &z);
    printf("Number of espresso shots? ");
    scanf("%d%c", &coffee1.shots, &z);
    printf("What is the name of this coffee? ");
    int i = 0;
    while(1){ //same code for task 1 for scanning coffee name
        scanf("%c", &z);
        coffee1.name[i] = z;
        if(z == '\n'){
            break;
        }else if(i >= 24){
            coffee1.name[i] = '\n';
            break;
        }
        i++;
    }
    //same thing as coffee name but with the milk
    printf("Which milk does it come with? ");
    i = 0;
    while(1){
        scanf("%c", &z);
        coffee1.milk[i] = z;
        if(z == '\n'){
            break;
        }else if(i >= 24){
            coffee1.milk[i] = '\n';
            break;
        }
        i++;
    }

    return coffee1;
}

void print_info(struct coffee C, int coff_num){ //structure for printing info
    //same code as in task 1
    printf("\nCoffee %d info:\n", coff_num); //adding specific number to specify coffee when printed
    printf("- Price: $%.2f\n", C.price);
    printf("- Calories: %d calories\n", C.calories);
    printf("- Number of Espresso Shots: %d\n", C.shots);
    printf("- Coffee Name: ");
    int i = 0;
    while(1){
        printf("%c", C.name[i]);
        if(C.name[i] == '\n'){
            break;
        }
        i++;
    }
    printf("- Milk Used: ");
    i = 0;
    while(1){
        printf("%c", C.milk[i]);
        if(C.milk[i] == '\n'){
            break;
        }
        i++;
    }
    return;
}

int main(){
    struct coffee COFF = scan_info(1); //calling down function but labeling it with a number so when outputted it prints out specific number 
    printf("\n"); //space between the two functions being called
    struct coffee COFF2 = scan_info(2); //printing another one right after first one and specifiying that this is the second coffee info
    print_info(COFF, 1); //display for coffee 1
    print_info(COFF2, 2); //display for coffee 2

    return 0;
}

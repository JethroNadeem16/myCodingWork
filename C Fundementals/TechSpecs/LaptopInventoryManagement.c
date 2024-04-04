#include <stdio.h>

char z; //dummy

struct laptop{ //3 members for laptop structure
    int storage;
    int RAM;
    float price;
};

struct laptop scan_info(int lp_num){ //scanning info inputted by user function; each laptop has there specific number
    struct laptop lp; 
    printf("Laptop %d:\n", lp_num);
    printf("How much storage does this laptop have? ");
    scanf("%d%c", &lp.storage, &z);
    printf("How much RAM does this laptop have? ");
    scanf("%d%c", &lp.RAM, &z);
    printf("What is the price of this laptop? $");
    scanf("%f%c", &lp.price, &z);

    return lp;
}

void print_info(struct laptop L, int lp_num){ //displaying inputted info function
    printf("\nLaptop %d info:\n", lp_num);
    printf("- Storage: %dGB\n", L.storage);
    printf("- RAM: %dGB\n", L.RAM);
    printf("- Price: $%.2f\n", L.price);

    return;
}

int main(){
    struct laptop num_lp[3]; //needed 3 laptop arrays

    int i = 0;
    while(i < 3){ //looping the scan function one at a time till there is a total of 3 being scanned
        num_lp[i] = scan_info(i + 1); //specifies the laptop when inputting the info; laptop 1 info, laptop 2 info, laptop 3 info
        i++; //one by one
    }
    i = 0;
    while(i < 3){ //looping the display function one at a time till there is a total of 3 being printed
        print_info(num_lp[i], i + 1); //printing the specific laptop info inputted
        i++; //one by one
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int amount, n, num;
    char z, v;

    printf("How many chars are in your roman numeral?\n");
    scanf("%d%c", &amount, &z);
    if(amount < 0){ //error system for array amount
        printf("Invalid input\n");
        exit(0);
    }
    char rom[amount];//array set up
    printf("Please provide your roman numeral, char by char(I, V, X, L, C, D, M):\n");
    for(n = 0; n < amount; n++){ //loop for inputting roman numerals
        scanf("%c%c", &v, &z);
        if(v != 'I' && v != 'V' && v != 'X' && v != 'L' && v != 'C' && v != 'D' && v != 'M'){ //error system for non usable roman numerals
            printf("Error! Try Again.\n");
            exit(0);
        }
        rom[n] = v; //making sure roman numeral equals right one
    }
    int rom_num[amount]; //array for number produced after converted
    for(n = 0; n < amount; n++){ //setting up what each roman numeral is equivalant to 
        if(rom[n] == 'M'){
            rom_num[n] = 1000;
        }else if(rom[n] == 'D'){
            rom_num[n] = 500;
        }else if(rom[n] == 'C'){
            rom_num[n] = 100;
        }else if(rom[n] == 'L'){
            rom_num[n] = 50;
        }else if(rom[n] == 'X'){
            rom_num[n] = 10;
        }else if(rom[n] == 'V'){
            rom_num[n] = 5;
        }else{
            rom_num[n] = 1;
        }
    }
    for(n = 1; n < amount; n++){ //trying to make the order of roman numerals equals the right number
        if(rom_num[n-1] < rom_num[n]){
            if(rom_num[n-1] == 1 && (rom_num[n] == 5 || rom_num[n] == 10)){
                rom_num[n-1] = 0;
                rom_num[n] = rom_num[n] - 1;
            }else{ //incase something goes wrong
                printf("Error! Something went wrong.\n");
                exit(0);
            }
        }
    }
    printf("The roman numeral you entered: "); //printing out roman numerals inputted on one line
    for(n = 0; n < amount; n++){
        printf("%c", rom[n]);
    }
    printf("\n"); //space

    for(n = 0; n < amount; n++){ //producing a variable for the result that the roman numerals made 
        num = 0;
        num += rom_num[n];
    }
    printf("It's equivalent in the decimal system: %d", num); //printing out that number result
    printf("\n"); //space

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int i, n; //not commonly used but can still use as global variable
float total; //^^
char Z; //dummy, of course

int initial(float I){
    float init;
    printf("How much money do you initially have in the bank? $");
    scanf("%f%c", &init, &Z);
    return init;
}

bool TS(){
    bool check;
    char money;
    for(n = 0; n < 1; n++){
        printf("Take Out or Save? Enter 'T' or 'S': ");
        scanf("%c%c", &money, &Z);
        if(money == 'T' || money == 't'){
            check = false;
        }else if(money == 'S' || money == 's'){
            check = true;
        }else{
            printf("Invalid transaction statement! Please input valid transaction statement. \n");
        }
    
    }
    return check;
}

float withdrawal(float currency){
    float withdrawal;
    printf("\tYou had $%.2f\n", currency);
    printf("\tHow much will you take out? $");
    scanf("%f%c", &withdrawal, &Z);
    currency -= withdrawal;
    return currency;
}

float deposit(float currency){
    float deposit;
    printf("\tYou had $%.2f\n", currency);
    printf("\tHow much will you save? $");
    scanf("%f%c", &deposit, &Z);
    currency += deposit;
    return currency;
}

int main(){
    int transaction;
    float IT, ini;
    printf("How many transactions would you like to record? ");
    scanf("%d%c", &transaction, &Z);
    IT = initial(ini);
    for(i = 0; i < transaction; i++){
        printf("Transaction %d: ", i + 1);
        bool chk = TS();
        if(chk){
            total = deposit(IT);
            printf("\tAfter saving, you now have $%.2f\n", total);
            IT = total;
        }else{
            total = withdrawal(IT);
            printf("\tAfter you take out, you now have $%.2f\n", total);
            IT = total;
        }
    }

    return 0;
}

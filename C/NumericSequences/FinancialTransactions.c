#include <stdio.h>

int main(){
    
    float amount;
    float transaction;

    printf("Initial amount of money: $"); //Asking Initial Amount
    scanf("%f", &amount);
    printf("Expense Transaction: $"); //Asking Transaction Amount
    scanf("%f", &transaction);
    amount -= transaction;
    printf("After Expense on December 5th: $%.2f\n", amount); //Prints new Amount
    
    printf("Expense Transaction: $"); //Asking Transaction Amount
    scanf("%f", &transaction);
    amount -= transaction;
    printf("After Expense on December 8th: $%.2f\n", amount); //Prints new Amount

    printf("Deposit Transaction: $"); //Asking Transaction Amount
    scanf("%f", &transaction);
    amount += transaction;
    printf("After Deposit on December 16th: $%.2f\n", amount); //Prints new Amount
 
    printf("Expense Transaction: $"); //Asking Transaction Amount
    scanf("%f", &transaction);
    amount -= transaction;
    printf("After Expense on December 21st: $%.2f\n", amount); //Prints new Amount

    printf("Deposit Transaction: $"); //Asking Transaction Amount
    scanf("%f", &transaction);
    amount += transaction;
    printf("After Deposit on December 28th: $%.2f\n", amount); //Prints new Amount


    return 0;
}

#include <stdio.h>

int main(){
    int ticket;
    printf("There are 30 tickets. Each ticket is numbered.\n"); //Informing user of what the ticket number limit
    printf("What is your ticket number? You may win a prize.\n");
    scanf("%d", &ticket); //Asking and declaring number user puts in as ticket number
    printf("So you ticket number is %d\n", ticket);
    
    if(ticket <= 5){ //if number isn't 5 or less than moves on to next statement
        printf("You have won a grand prize!\n");
    }else if(ticket <= 10){ //if number entered isn't above 5 or 10 and less than moves to else statement
        printf("You have won a prize!\n");
    }else if(ticket > 30){ //declaring anything past 30 won't work
        printf("ERROR! Ticket is invalid.\n");
    }else{ //if first two statments don't work and it isn't above 30 than this shows up
        printf("You have not won a prize.\n");
    }
    
    return 0;
}

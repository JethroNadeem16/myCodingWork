#include <stdio.h>

struct node{ //node structure
    char value; //value for word
    double val; //value number
    struct node *next; //next pointer
};

int main(){
    struct node n1, n2, n3, n4, n5; //structure variables
    //one goes to the next and so on until NULL
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    //5 letter word being Comet
    n1.value = 'C';
    n2.value = 'o';
    n3.value = 'm';
    n4.value = 'e';
    n5.value = 't';
    //pointer in main
    struct node *p;
    p = &n1; //pointer to first value

    printf("Our 5 letter word spelled out letter by letter is:\n");
    while(p != NULL){ //printing using loop showed in class
        printf("%c\n", p->value);
        p = p->next;
    }
    //Now doing it with doubles
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;
    //random numbers for stock prices
    n1.val = 2.51;
    n2.val = 5.66;
    n3.val = 3.95;
    n4.val = 7.03;
    n5.val = 9.99;
    
    p = &n1;
    
    printf("Our fluctuating stock price is:\n");
    while(p != NULL){
        printf("$%.2lf\n", p->val);
        p = p->next;
    }

    return 0;
}

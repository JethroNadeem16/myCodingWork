#include <stdio.h>

struct node{
    int val;
    struct node *next;

};

int main(){
    struct node n1, n2, n3;
    char z;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n1;

    n1.val = 5;
    n2.val = 15;
    n3.val = 20;
    
    int n;
    printf("How many times would you like to print it? ");
    scanf("%d%c", &n, &z);

    int i = 0;
    struct node *p;
    p = &n1;
    printf("Here are the values:\n");
    while(i < n){
        printf("- %d\n", p->val);
        p = p->next;
        i++;
    }
    
    return 0;
}

#include <stdio.h>

struct node1{ //creating structure with char member and 2 pointers
    char str[100];
    struct node1 *next;
    struct node1 *prev;
};

void full_name(char A[]){ //creating scan function for the string
    char z = ' ';
    printf("Enter a full name: ");
    int i = 0;
    while(1){
        scanf("%c", &z);
        A[i] = z;
        if(z == '\n' || i > 100){
            break;
        }else{
            A[i] = z;
        }
        i++;
    }
    A[i] = '\0';

    return;
}

void print_name(char A[]){ //creating print function for the string
    int i = 0;
    while(1){
        printf("%c", A[i]);
        if(A[i] == '\0'){
            break;
        }
        i++;
    }

    return;
}

int main(){
    struct node1 n1, n2, n3, n4; //4 structure members in main
    char z; //dummy
    //setting each structure member to the next in order until it ends at null
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    //creating pointer in main
    struct node1 *head;
    //pointing to n1
    head = &n1;
    while(head != NULL){ //while it doesn't equal null, call down scan function into loop, set pointer to inputted string, pointer equals string then to next node.
        full_name(head->str);
        head = head->next;
    }

    printf("\n"); //space to make result look better

    head = &n1; //setting pointer back to n1 for start
    while(head != NULL){ //printing inputted strings for each node
        print_name(head->str);
        printf("\n"); //space
        head = head->next;
    }
    //creating double linked list and having them go backwards
    n4.prev = &n3;
    n3.prev = &n2;
    n2.prev = &n1;
    n1.prev = NULL;
    
    printf("\n");

    char fb; //forwards or backwards character value
    printf("Would you like the name to be printed forwards or backwards (F, f or B, b)? ");
    scanf("%c%c", &fb, &z); //saving inputted value from user
    printf("\n");
    if(fb == 'F' || fb == 'f'){ //upper or lower case f works for forwards
        printf("If forwards:\n");
        head = &n1; //previous method to print string forwards
        while(head != NULL){
            print_name(head->str);
            printf("\n");
            head = head->next;
        }
    }else if(fb == 'B' || fb == 'b'){ //upper or lower case b words for backwards
        printf("If backwards:\n");
        head = &n4; //since its going backwards, it starts from where input ends
        while(head != NULL){ //almost same as before
            print_name(head->str);
            printf("\n");
            head = head->prev; //using the prev pointer so it know to use the backwards thing set up earlier
        }
    }else{ //any other character inputted will get this 
        printf("The character you have inputted is invalid.\n");
    }

    return 0;
}

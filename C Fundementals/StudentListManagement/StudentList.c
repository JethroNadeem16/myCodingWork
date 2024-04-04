#include <stdio.h>

struct student{ //structure with members and pointers
    int ID;
    int Age;
    int GY;
    struct student *next;
    struct student *prev;
};

struct student scan_info(){ //scanning structure
    struct student s;
    char z;
    printf("Please provide the following for Student :\n");
    printf("ID: ");
    scanf("%d%c", &s.ID, &z);
    printf("Age: ");
    scanf("%d%c", &s.Age, &z);
    printf("Graduation Year: ");
    scanf("%d%c", &s.GY, &z);

    return s;
}

void print_info(struct student S){ //printing function but I think something is wrong since the print out is not working as its supposed too
    printf("Student : ID-> %d; Age-> %d; Graduation Year-> %d\n", S.ID, S.Age, S.GY);

    return;
}

void delete_node(struct student *node){ //I think this is right for the taking out the middle node
    node->next = node->next->next;
    return;
}

int main(){
    struct student n1, n2, n3, n4; //4 node values
    struct student stud; //for scanning function to equal
    char z;
    //setting it forward
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    //pointer
    struct student *head;
    //scanning loop
    head = &n1;
    while(head != NULL){
        stud = scan_info();
        head = head->next;
    }

    printf("\n");

    //something went wrong past this when I tried printing it out, I tried many things, all didn't work out

    //supposed to print all different nodes instead of the same node that's inputted last forwards
    printf("Forwards:\n");
    head = &n1;
    while(head != NULL){     
        //tried not using print function, didn't work out: printf("Student : ID-> %d; Age-> %d; Graduation Year-> %d\n", head.ID, head.Age, head.GY);
        print_info(stud);
        head = head->next;
    }

    printf("\n");
    //backwards
    n4.prev = &n3;
    n3.prev = &n2;
    n2.prev = &n1;
    n1.prev = NULL;
    //does print backwards but you don't notice it because the same node prints out
    printf("Backwards:\n");
    head = &n4;
    while(head != NULL){    
        //printf("Student : ID-> %d; Age-> %d; Graduation Year-> %d\n", head.ID, head.Age, head.GY);
        print_info(stud);
        head = head->prev;
    }
    printf("\n");
    //Supposed to remove the node from what I looked back on but print out may have messed it up
    printf("Forwards with middle node removed:\n");
    head = &n1;
    while(head != NULL){
        delete_node(&n2);
        print_info(stud);
        head = head->next;
    }

    printf("\n");
    printf("Backwards with middle node removed:\n"); 
    head = &n4;
    while(head != NULL){
        delete_node(&n3);
        print_info(stud);
        head = head->prev;
    }

    return 0;
}

#include <stdio.h>

int main(){
    int i1 = 1, i2 = 4;
    float n1 = 2.5, n2 = 6.5;
    //printing the initialized values and their address's
    printf("The Value of i1 is: %d\nThe Address of i1 is: %p\n", i1, &i1);
    printf("The Value of i2 is: %d\nThe Address of i2 is: %p\n", i2, &i2);
    printf("The Value of n1 is: %.1f\nThe Address of n1 is: %p\n", n1, &n1);
    printf("The Value of n2 is: %.1f\nThe Address of n2 is: %p\n", n2, &n2);
    printf("\n");
    //setting up the pointers
    int *p1, *p2;
    float *p3, *p4;
    //initializing pointers to previous variables
    p1 = &i1;
    p2 = &i2;
    p3 = &n1;
    p4 = &n2;
    //printing the pointers address's, value (which is the previous variables address), and the de-referenced value(the actual value set for the previous variable)
    printf("The Address of p1 is: %p\nThe Value of p1 is: %p\nThe De-Referenced Value of p1 is: %d\n", &p1, p1, *p1);
    printf("The Address of p2 is: %p\nThe Value of p2 is: %p\nThe De-Referenced Value of p2 is: %d\n", &p2, p2, *p2);
    printf("The Address of p3 is: %p\nThe Value of p3 is: %p\nThe De-Referenced Value of p3 is: %.1f\n", &p3, p3, *p3);
    printf("The Address of p4 is: %p\nThe Value of p4 is: %p\nThe De-Referenced Value of p4 is: %.1f\n", &p4, p4, *p4);

    return 0;
}

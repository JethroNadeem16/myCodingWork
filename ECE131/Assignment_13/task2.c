#include <stdio.h>

int main(){
    double i1, i2; //2 double variables
    double *p1; //pointer to a double
    char z; //dummy

    p1 = &i1; //pointing pointer to first double
    printf("What is the value of the first double?\n");
    scanf("%lf%c", p1, &z); //scanning the pointer
    printf("The value of the first double is: %.2lf\n", *p1); //printing dereferenced pointer

    p1 = &i2; //pointing pointer to second double
    printf("What is the value of the second double?\n");
    scanf("%lf%c", p1, &z); //scanning the pointer that's set to the second double
    printf("The value of the second double is: %.2lf\n", *p1); //printing dereferenced pointer

    return 0;
}

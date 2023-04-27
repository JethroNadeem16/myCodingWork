#include <stdio.h>

char z; //dummy

struct time{ //3 structure members of time
    int hours;
    int min;
    int seconds;
};

int main(){
    struct time time1, time2; //2 structure variables
    struct time *t; //pointer of structure
    //setting pointer to first structure variable
    t = &time1;
    //initializing the time with the pointers using ->
    t->hours = 2;
    t->min = 29;
    t->seconds = 59;
    //printing structure using structure
    printf("The manually inputted time is %d:%d:%d\n", time1.hours, time1.min, time1.seconds);
    //setting pointer to second structure variable
    t = &time2;
    //initializing time with pointers using (*) method
    (*t).hours = 11;
    (*t).min = 59;
    (*t).seconds = 30;
    //printing structure using structure
    printf("The new manually inputted time is %d:%d:%d\n", time2.hours, time2.min, time2.seconds);

    return 0;
}

#include <stdio.h>

int main(){
    int m1 = 1; //starts at 1
    int m2 = 2; //starts at 2
    int m3 = 3; //starts at 3
    printf("1's Multiples\t2's Multiples\t3's Multiples\n"); //adding columns
    while(m1<=10){ //declaring how many rows I want
        printf("%7d%16d%16d\n", m1, m2, m3); //making sure the numbers are under the correct column
        m1 += 1; //adding first row by 1
        m2 += 2; //adding second row by 2
        m3 += 3; //adding third row by 3
    }

    int m01 = 1; //starts at 1
    int m5 = 5; //starts at 5
    int m10 = 10; //starts at 10
    printf("1's Multiples\t5's Multiples\t10's Multiples\n"); //columns
    do{ 
        printf("%7d%16d%17d\n", m01, m5, m10); //spacing
        m01 += 1; //adds by 1
        m5 += 5; //adds by 5
        m10 += 10; //adds by 10
    }while(m01<=10); //10 rows




    return 0;
}

#include <stdio.h>

int main(){
    int f = 1; //starting at 1
    printf("Integers within 0 and 10:\n");
    while(f<=10){
        printf("f = %d\n", f);
        f+=1; //adds by 1 until it reaches 10
    }

    int c;
    printf("Odd numbers between 1 and 23:\n");
    for(c=1; c<23; c+=2){ //starts at 1, doesn't end at 23 but below it, adds by 2
        printf("c = %d\n", c);
    }

    float t = 1;
    printf("All the tenths between 1 and 3:\n");
    while(t<=3){
        printf("t = %.2f\n", t);
        t+=0.1; //adds by .1 until it reaches 3
    }

    int p;
    printf("Multiples of 5 between 1000 and 1125:\n");
    for(p=1000; p<1125; p+=5){ //starts at 1000, adds by 5 until less than 1125
        printf("p = %d\n", p);
    }

    int lc = 97; //97 = a
    printf("ASCII lower case alphabet:\n");
    while(lc<=122){ //122 = z 
        printf("lc = %c\n", lc); //%c translates number to letter
        lc+=1; //adds by 1 so it moves to each letter
    }
    
    int uc;
    printf("ASCII upper case alphabet:\n");
    for(uc=65; uc<=90; uc+=1){ //65 = A, 90 = Z, add by 1 to move to each letter
        printf("uc = %c\n", uc); //prints out ASCII by using %c
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

double volume(float H, float R){ //different function to call down volume and cups
    float v, c, pi = 3.1416; //volume, cups, and pi
    v = pi*R*R*H; //calculating volume
    printf("Your volume is %.2fcm^3\n", v); //prints out given volume when called down in main
    c = v / 25; //calculating number of needed cups
    return c;
}

int main(){
    float r, h, C; //radius, height, calling down function
    char z; //dummy
    printf("What is the height for the desired cake?\n");
    scanf("%f%c", &h, &z); //height for cake
    printf("What is the radius for the desired cake?\n");
    scanf("%f%c", &r, &z); //radius for cake
    C = volume(h, r); //having function equal something and calling down function into main
    printf("You will need %.2f cups of flour\n", C); //printing what's in other function

    return 0;
}

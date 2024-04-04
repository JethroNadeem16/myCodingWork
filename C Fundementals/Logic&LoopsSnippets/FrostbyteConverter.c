#include <stdio.h>

int main(){
    float f, c;
    char dummy;
    printf("What is the temperature in Farenheit?\n");
    scanf("%f%c", &f, &dummy);
    printf("So the temperature in Farenheit is: %.2f\n", f);
    c = (f - 30) / 2;
    printf("Converted to Celsius the temperature is: %.2f\n", c);
    if(f < -459.67){
        printf("That must be colder than space!\n");
    }else if(c > 5504.85){
        printf("That's hotter than the core of the Earth!\n");
    }

    return 0;
}

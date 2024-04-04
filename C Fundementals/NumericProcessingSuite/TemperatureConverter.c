#include <stdio.h>
#include <stdlib.h>

double CelToFar(double cel){ //Celsius to Fahrenheit function
    double far;
    far = cel * 1.8 + 32;
    return far;
}

double CelToKel(double cel){ //Celsius to Kelvin function
    double kel;
    kel = cel + 273.15;
    return kel;
}

double FarToCel(double far){ //Fahrenheit to Celsius function
    double cel;
    cel = (far - 32) * 5/9;
    return cel;
}

double FarToKel(double far){ //Fahrenheit to Kelvin function
    double kel;
    kel = (far - 32) * 5/9 + 273.15;
    return kel;
}

double KelToFar(double kel){ //Kelvin to Fahrenheit function
    double far;
    far = 1.8 * (kel - 273.15) + 32;
    return far;
}

double KelToCel(double kel){ //Kelvin to Celsius function
    double cel;
    cel = kel - 273.15;
    return cel;
}

int main(){
    double intemp, destemp; //initial and desired temperature units
    char inunit, desunit, z; //initial and desired character unit for conversion

    printf("Which unit will you be converting from?\n");
    printf("'c' for Celsius, 'f' for Fahrenheit, 'k' for Kelvin.\n");
    scanf("%c%c", &inunit, &z); //initial unit scan
    printf("What unit would you be converting to?\n");
    scanf("%c%c", &desunit, &z); //desired unit scan
    printf("So we will convert from '%c' to '%c'. \n", inunit, desunit); //saying what you want to convert from and to
    printf("What temperature would you like to convert?\n"); //asking for temperature you want to convert
    scanf("%lf%c", &intemp, &z);

    if(inunit == 'c'){ //if you want to convert from Celsius
        if(desunit == 'k'){ //to kelvin
            destemp = CelToKel(intemp); //pulling equation from function
            printf("%.2lf Celsius equals %.2lf Kelvin\n", intemp, destemp);
        }else if(desunit == 'f'){ //to fahrenheit
            destemp = CelToFar(intemp); //pulling equation
            printf("%.2lf Celsius equals %.2lf Fahrenheit\n", intemp, destemp);
        }else{ //if unknown characters pop up
            printf("Do not understand what '%c' is.\n", desunit);
        }
    }

    if(inunit == 'f'){ //from fahrenheit
        if(desunit == 'c'){ //to celsius
            destemp = FarToCel(intemp); //pulling equation from function
            printf("%.2lf Fahrenheit equals %.2lf Celsius\n", intemp, destemp);
        }else if(desunit == 'k'){ //to kelvin
            destemp = FarToKel(intemp); //pulling equation from function
            printf("%.2lf Fahrenheit equals %.2lf Kelvin\n", intemp, destemp);
        }else{
            printf("Do not understand what '%c' is.\n", desunit);
        }
    }

    if(inunit == 'k'){ //from kelvin
        if(desunit == 'f'){ //to fahrenheit
            destemp = KelToFar(intemp); //pulling equation from function
            printf("%.2lf Kelvin equals %.2lf Fahrenheit\n", intemp, destemp);
        }else if(desunit == 'c'){ //to celsius
            destemp = KelToCel(intemp); //pulling equation from function
            printf("%.2lf Kelvin equals %.2lf Celsius\n", intemp, destemp);
        }else{
            printf("Do not understand what '%c' is.\n", desunit);
        }
    }

    return 0;
}

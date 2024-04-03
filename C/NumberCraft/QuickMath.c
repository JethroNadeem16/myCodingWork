#include <stdio.h>

int main(){
    float result, a, b;
    char operator, dummy;

    printf("Enter number you want to start calculating.\n");
    scanf("%f%c", &a, &dummy);
    printf("Enter which operator you want to use. ('+', '-', '*', '/')\n");
    scanf("%c%c", &operator, &dummy);
    printf("Enter number you want to calculate by.\n");
    scanf("%f%c", &b, &dummy);
    printf("You inputted '%.2f %c %.2f'.\n", a, operator, b);

    switch(operator){
            case '+': //Assigning operators as character to be used to work
                    result = a + b; //Produces results based on users inputs
                    printf("Your calculated result is %.2f\n", result);
                    break;
            case '-':
                    result = a - b;
                    printf("Your calculated result is %.2f\n", result);
                    break;
            case '*':
                    result = a * b;
                    printf("Your calculated result is %.2f\n", result);
                    break;
            case '/':
                    result = a / b;
                    printf("Your calculated result is %.2f\n", result);
                    break;
            default:
                    printf("Invalid input has been entered.\n"); //Anything other than the four operators given will not work
    }


    return 0;

}

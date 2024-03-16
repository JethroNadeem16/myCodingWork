#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    double income;
    int usage;
    char dummy;

    printf("Welcome to the Car Rental Store! Please answer a few questions first.\n");
    printf("What is your age?\n");
    scanf("%d%c", &age, &dummy); //Declares inputted age
    if(age < 16 || age > 85){ //Declaring undrivable scenerio if-statement
        printf("You should not be driving.\n");
        exit(0); //Closes program if the if-statement declaration is triggered
    }
    printf("What is your monthly income?\n");
    scanf("%lf%c", &income, &dummy); //Declares inputted income
    printf("Number of days you'll be renting the car?\n");
    scanf("%d%c", &usage, &dummy); //Declares inputted usage
    printf("Age: %d, Monthly Income: $%.2lf, Usage Time: %d days\n", age, income, usage);

    if(age < 25 && income < 1200 && usage >= 1 && usage <= 3){ //Multiple And-statements to make the situation work
        printf("Estimated price is $42.00 per day\n");
    }else if(usage >= 4 && usage <= 6){ //else-if for different usage variable situations
        printf("Estimated price is $40.00 per day\n");
    }else if(income >= 1200 && usage >= 1 && usage <= 7){ //different situation for different variables
        printf("Estimated price is $35.00 per day\n");
    }if(age >= 25 && income < 1500 && usage >= 1 && usage <= 7){ //multiple other variables for different variable inputted situations
        printf("Estimated price is $31.00 per day\n");
    }else if(income >= 1500 && usage > 7){ //different income, different usage situations
        printf("Estimated price is $25.00 per day\n");
    }else{ //information inputted does not work with deal chart plan
        printf("Something went wrong with entered information. Please input correct information again.\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int initial(float I){ //function for initial value
    float init;
    char Z; //dummy
    printf("How much money do you initially have in the bank? $");
    scanf("%f%c", &init, &Z);
    return init; //returning initial value
}

bool TS(){ //boolean function for checking based on inputted letter
    bool check; //Makes sure the right letter corresponds with the right action
    int n; //number of times it will go through loop
    char money, Z; //money = withdraw or deposit input
    for(n = 0; n < 1; n++){
        printf("Take Out or Save? Enter 'T' or 'S': ");
        scanf("%c%c", &money, &Z);
        if(money == 'T' || money == 't'){ //both capital and lower case 't'
            check = false; //honestly initially I had it wrong and couldn't figue out why the letter wouldn't correspond with the right action and fiddled with other parts of the code thinking something went wrong there but after racking my brain for an hour and doing this it worked. I don't understand why but it did.
        }else if(money == 'S' || money == 's'){
            check = true;
        }else{
            printf("Invalid transaction statement! Please input valid transaction statement. \n");
        }
    
    }
    return check;
}

float withdrawal(float currency){ //function to make taking out money works right
    float withdrawal;
    char Z;
    printf("\tYou had $%.2f\n", currency);
    printf("\tHow much will you take out? $");
    scanf("%f%c", &withdrawal, &Z);
    currency -= withdrawal;
    return currency;
}

float deposit(float currency){ //function for depositing money works right
    float deposit;
    char Z;
    printf("\tYou had $%.2f\n", currency);
    printf("\tHow much will you save? $");
    scanf("%f%c", &deposit, &Z);
    currency += deposit;
    return currency;
}

int main(){
    int transaction, i;
    float IT, ini, total; //some variables so that function could be called
    char z; //dummy
    printf("How many transactions would you like to record? ");
    scanf("%d%c", &transaction, &z);
    IT = initial(ini); //initial function being called
    for(i = 0; i < transaction; i++){
        printf("Transaction %d: ", i + 1);
        bool chk = TS(); //calling down checking function
        if(chk){ //if its not depositing then its withdrawal, saving total after inputted withdrawal or deposit
            total = deposit(IT);
            printf("\tAfter saving, you now have $%.2f\n", total);
            IT = total;
        }else{
            total = withdrawal(IT);
            printf("\tAfter you take out, you now have $%.2f\n", total);
            IT = total;
        }
    }

    return 0;
}

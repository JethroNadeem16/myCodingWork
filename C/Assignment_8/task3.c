#include <stdio.h>
#include <stdlib.h>

void scan_act_scores(int N, int scores[]){ //function to scan inputted act scores
    int n;
    char Z;
    printf("Please input your ACT scores:\n");
    for(n = 0; n < N; n++){ //array starts at 0 and goes up by one until reaching array limit
        scanf("%d%c", &scores[n], &Z);
    }
    return;
}

void start_end(int N, int scores[]){ //function for printing where you want to print your chosen start and end
    int n, start, end;
    char Z;
    printf("Based on the number of arrays you inputted for your ACT scores, where in your array would you like to start(First score you inputted would be 0)?\n");
    scanf("%d%c", &start, &Z);
    printf("Based on the number of arrays you inputted for your ACT scores, where in your array would you like to end?\n");
    scanf("%d%c", &end, &Z);
    printf("So the ACT scores you've chosen to display are:\n");
    for(n = start; n <= end; n++){ //array number you input is where you start and end the print for you inputted score
        if(n >= 0 && n < end){ //array naturally starts at 0 so anything below is wrong. N < end isn't working too well, don't know why.
            printf("%d\n", scores[n]);
        }else{
            printf("Error! Input incorrect.\n");
            exit(0);
        }
    }
    return;
}

int main(){
    int i;
    char z;
    printf("How many ACT scores would you like to post in your array? ");
    scanf("%d%c", &i, &z); //scanning array amount

    int act[i]; //initialize array for inputted scores
    scan_act_scores(i, act); //pulling scanning function for inputted scores function
    start_end(i, act); //pulling print function for where you choose to start and end

    return 0;
}

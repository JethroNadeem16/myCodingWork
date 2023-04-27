#include <stdio.h>

int main(){
    char z;
    int r, c, g;

    printf("How many exams (cols) did you have this semester? ");
    scanf("%d%c", &c, &z);
    printf("How many students (rows) did you have? ");
    scanf("%d%c", &r, &z);
    char arr[r][c];
    printf("Provide me with headers of your table:\n");
    int i = 0;
    for(int n = 0; n < c; n++){
        printf("Header %d: ", n + 1);
        while(1){
            scanf("%c", &z);
            arr[i] = z;
            if(z == '\n'){
                break;
            }else if(i >= 150){
                arr[i] = '\n';
                break;
            }
            i++;
        }
    }
    printf("Next, provide me with the names of your students:\n");
    i = 0;
    for(int n = 0; n < r; n++){
        printf("Student %d Name: ", n + 1);
        while(1){
            scanf("%c", &z);
            arr[i] = z;
            if(z == '\n'){
                break;
            }else if(i >= 150){
                arr[i] = '\n';
                break;
            }
            i++;
        }
    }
    printf("Input the grades of your student for each exam:\n");
    for(int n = 0; n < arr[r][c]; n++){
        printf("For %s, what was the grade in %s", arr[1], arr[0]);   
        scanf("%d%c", &g, &z);
    }
    

    return 0;
}

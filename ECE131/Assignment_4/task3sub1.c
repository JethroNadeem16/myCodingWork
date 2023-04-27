#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
   int keys;
   bool key1, key10, key20, key0;
   char yn, dummy;

   printf("Do you know what a key is? [Y/N]\n");
   scanf("%c%c", &yn, &dummy);
   if(yn == 'Y'){
        printf("Most people should know so that's good\n");
   }else{
        printf("How do you not know what a key is?!\n");
        exit(0);
   }

   printf("How many keys do you have? ");
   scanf("%d%c", &keys, &dummy);

   key1 = (keys >= 1)? true : false;
   key10 = (keys >= 10)? true : false;
   key20 = (keys >= 20)? true : false;
   key0 = (keys == 0)? true : false;

   if(key10){
       if(key20){
            printf("You got a lot of keys. I doubt you use all of them.\n");
       }else{
            printf("You got quite the amount of locks to open.\n");
       }
   }else if(key1){
        printf("You got a decent normal amount of keys.\n");
   }else if(key0){
        printf("No keys. Are you using magic to open stuff up?\n");
   }else{
        printf("Imaginary keys. Good luck with those.\n");
   }


   return 0;
}

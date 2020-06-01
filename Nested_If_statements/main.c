#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gender;

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your gender? (m/f)\n");
    scanf(" %c", &gender);

    if(age>=18){
        printf("You are old enough\n");
       if(gender=='m')
       {
        printf("Chairman you are welcome!\n");
       }
       if(gender=='f'){
        printf("Females are not welcome");
       }
    }
    if(age<17){
      printf("You are under age\n");
      if(gender=='f'){
        printf("You are young and a female as well so you are not welcome");
      }
    }
    return 0;
}

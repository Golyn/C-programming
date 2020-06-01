#include <stdio.h>
#include <stdlib.h>

// scanf is used function to take input from the user.

/*int main()
{

    if(4<10){
        printf("4 is less than 10!\n");
    }
    if(15>10){
        printf("15 is greater than 10\n");
    }
    if(2==2){
        printf("2 is equal to 2");
    }
    return 0;
}
*/

int main()
{
    int age;
    printf("How old are you?\n");
    scanf(" %d",&age);     // scanf is used function to take input from the user.
    if(age>=18)
        {
         printf("You are old enough to view content\n");
    }

    if(age<18){
        printf("You are under age\n");
    }
    printf("Hello World");


}

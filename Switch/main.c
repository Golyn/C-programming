#include <stdio.h>
#include <stdlib.h>

//A switch statement allows a variable to be tested for equality against a list of values.
//When a break statement is reached, the switch terminates, and the flow of control jumps to the next line following the switch statement. Not every case needs to contain a break. If no break appears, the flow of control will fall through to subsequent cases until a break is reached
//The default case can be used for performing a task when none of the cases is true.
int main()
{
 /*
    char grade;
    printf("Welcome to grade management system\n");
    printf("======================================\n");
    printf("Enter your grade[A-Excellent,B--Good,C--Pass,D--Fail]\n");
    scanf(" %c", &grade);
    //using switch statements to determine a remark
    switch(grade)
    {
    case 'A':
        printf("Congratulations! Excellent\n");
        break;
    case 'B':
        printf("Congratulations! Good\n");
        break;
    case 'C':
        printf("You can do better! PASS\n");
        break;
    case 'D':
        printf("You are lazy! Fail\n");
        break;
    default:   //Optional
        printf("INVALID ENTRIES\n");

    }

    */


 //===================================================================================================>
 char grade ='B';
 switch(grade)
 {
   case 'A':
       printf("Excellent!\n" );
      break;

   case 'B':    //if it has break, it will check and excute if the value or case condition io equals
   case 'C':
       printf("Well done\n" );
      break;
   case 'D' :
      printf("You passed\n" );
      break;
   case 'E':
      printf("Better try again\n" );
      break;
   default:
      printf("Invalid grade\n" );
 }

      printf("Invalid grade\n" );

    return 0;

}

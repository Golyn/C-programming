#include <stdio.h>
#include <stdlib.h>

int main()
{

    char grade;
    printf("Welcome to grade management system\n");
    printf("======================================\n");
    printf("Enter your grade[A-Excellent,B--Good]\n");
    scanf(" %c", &grade);
    //using series of if statements to determine a remark
    if(grade=='A')
    {
        printf("Congratulations! Excellent\n");
    }
    else if(grade=='B')
    {
        printf("Congratulations! Good\n");
    }
    else if(grade=='C')
    {
        printf("You can do better! PASS\n");
    }
    else if(grade=='D'){
        printf("You are lazy! Fail\n");
    }

    return 0;
}

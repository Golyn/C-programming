#include <stdio.h>
#include <stdlib.h>
//scores sheet system
int main()
{
    int scores[3][3];
    char name[100];
    int subjectcode;
    int score;
    printf("Enter your subject code\n");
    scanf(" %s",name);
    printf("Enter your subject code e.g [MATHS--1]\n");
    scanf(" %D",scores[0][0]);
    printf("Enter your subject code e.g [ENG--2]\n");
    printf("Enter your subject code e.g [CHEMISTRY--3]\n");


    return 0;
}

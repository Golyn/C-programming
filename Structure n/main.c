#include <stdio.h>
#include <stdlib.h>

//Structure Definition
struct student{             //myStruct --tag name
    //Structure members
  int id;
  char name[20];
  float perc;

};
//Declaration structure variables in the main function
int main()
{
    struct student s1 = {201, "Seth", 90.5}; // structure variable initialization
    struct student s2; //structure variable 2 declaration

    printf("%d\n",s1.id);
    printf("%s\n",s1.name);
    printf("%.2f\n",s1.perc);
    return 0;
}

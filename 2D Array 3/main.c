#include <stdio.h>
#include <stdlib.h>

//creating a scoresheet system
int main()
{
    int scores[3][2];  //3 rows and 2 columns
    //inputing values into array
    //for maths code
    scores[0][0]=1;  //r0c0
    //for maths score
    scores[0][1]=70;  //r0c1
    //for english code
    scores[1][0]=2;   //r1c0
    //for english score
    scores[1][1]=90;  //r1c1
    //for chemistry code
    scores[2][0]=3;   //r2c0
    //for chemistry score
    scores[2][1]=59;  //r2c1

    //Displaying values from the array
    printf("CODE--%d\t",scores[0][0]);
    printf("SCORE--%d\n",scores[0][1]);
    printf("CODE--%d\t",scores[1][0]);
    printf("SCORE--%d\n",scores[1][1]);
    printf("CODE--%d\t",scores[2][0]);
    printf("SCORE--%d\n",scores[2][1]);
    return 0;
}

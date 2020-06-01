#include <stdio.h>
#include <stdlib.h>
float getAverage(int a)
{
    int n=5;
    float aver=0;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter a number\n");
        scanf(" %d",&a);
        aver+=a;
    }
    printf("The average of the five numbers is %.2f\n",aver/n);
    return 0;
}

int main()
{
    int a;
    getAverage(a);
    return 0;
}

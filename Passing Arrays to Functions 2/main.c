#include <stdio.h>
#include <stdlib.h>

int add(int b[],int len)
{
    int sum=0;
    int i;
    for(i=0;i<len;i++)
    {
        sum+=b[i];  //calculating the sum of the array=10
    }
   return sum; //sum is returned to the function add(a, len)
}

int main()
{
    int a[]= {1,2,3,4,};
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d\n",add(a,len));

    return 0;
}

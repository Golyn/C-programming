#include <stdio.h>
#include <stdlib.h>

//finding the size of elements and the average of the elements

float myFunc(int A[], int len)
{
  int i,sum=0;
  float avg;
  for(i=0;i<len;i++)
  {
      sum+=A[i];
  }
  avg=sum/len;
  return avg;
}

int main()
{
    int mArr[] = {20,12,6,4,30,45};
    int len = sizeof(mArr)/sizeof(mArr[0]);
    printf("The size of the element is %d\n",len);
   // printf("Sum of the elements is %d\n",myFunc(mArr,len));
    printf("The Average elements is %.2f\n",myFunc(mArr,len));
    // OR
    //float avg=myFunc(mArr,len);
    //printf("The Average of the elements is %.2f",avg);
    return 0;
}

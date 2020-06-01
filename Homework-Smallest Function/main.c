#include <stdio.h>
#include <stdlib.h>

/*
2. Write a function in c language that finds the smallest number out of 10 integer numbers.
note:
1. the function name is getSmallest()
2. the function will return no value
3. the function will have no parameters
4. you must use a loop.
*/

void  getSmallest()
{
  int small,n,i;
  int elements=10;
  printf("Enter a number\n");
  scanf(" %d",&n);
  small=n;
  for(i=0;i<elements-1;i++) //-1 to make the total numbers displayed up to 10
  {
      printf("Enter another number\n");
      scanf(" %d",&n);
      if(n<small)
      {
          small=n;
      }
  }
  printf("The smallest number is %d\n",small);
}

int main()
{
    getSmallest();
    return 0;
}

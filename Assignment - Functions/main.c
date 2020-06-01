#include <stdio.h>
#include <stdlib.h>

//C Program to Find Largest and Smallest Number among N Numbers
int main()
{

  int lar,elem,sm,n;
  printf ("Enter total number of elements \n");
  scanf ("%d", &elem);
  printf ("Enter number \n");
  scanf ("%d", &n);
  lar = n;
  sm=n;
  int i;
  for (i=1;i<elem-1;i++)
    {
        printf("\n Enter another number \n");
        scanf("%d",&n);
        if(n>lar)
        lar=n;
        if(n<sm)
        sm=n;
    }
 printf("\n The largest number is %d", lar);
 printf("\n The smallest number is %d", sm);
    return 0;
}
/*
Here, the program asks the user to input total number of elements among which the largest
and the smallest is to be found. It then asks for the first number from the user before the loop,
which is assigned to both variable lar and variable sm.
Here, we suppose that lar is the largest number and sm is the smallest number for now.
Now inside the loop, the program asks the user to input a number (elem-1) times (elem-1 times as
first number is already asked before the loop).
Each time the user inputs a number, the condition n>lar is checked;
if the entered number is greater than lar, lar=n which assigns
the latest entered number to lar implying n as the new greatest..
Similarly, the condition n<sm is also checked;
if the entered number is smaller than sm then sm=n implying n as the new smallest.
*/

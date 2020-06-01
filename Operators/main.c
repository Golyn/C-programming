#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 40;
  //using if with logical operator
  if(age==70 || age<50) // || means or
  {
      printf("Welcome Elder\n");
  }
  else
  {
   printf("You are not there yet\n");
  }

   int x = 80;
  //using if with logical operator
  if(x==70 && x<50) // || means or
  {
      printf("Welcome Elder\n");
  }
  else
  {
   printf("You are not there yet\n");
  }


   int y = 40;
  //using if with logical operator
  if(! (x==70 && x<50)) // || means or
  {
      printf("Welcome Elder\n");
  }
  else
  {
   printf("You are not there yet\n");
  }

  int c;
  int K;
  int b;
  int e;
  int d;
  c <<= 2;  //Left shift AND assignment operator. Same as:  C= C << 2
  K >>= 2;  //Right shift AND assignment operator.
  b &= 2; //Bitwise AND assignment operator.
  e ^= 2;  //Bitwise exclusive OR and assignment operator.
  d = d | 2;  //Bitwise inclusive OR and assignment operator.
  printf("<<= Operator Example, Value of c = %d\n", c );
  printf(">>= Operator Example, Value of K = %d\n", K );
  printf("&= Operator Example, Value of b = %d\n", b );
  printf("^= Operator Example, Value of e = %d\n", e );
  printf("|= Operator Example, Value of d = %d\n", d );

}

#include <stdio.h>
#include <stdlib.h>

//Functions With Parameters With Return value
int MultiplyAny2Numbers(int n1, int n2)
{
    return n1*n2;
}
int main()
{
    int a;
    int b;
    printf("Enter number1:\n");
    scanf(" %d", &a);
    printf("Enter number2:\n");
    scanf(" %d", &b);

    printf("Multiply %d by %d = %d\n",a,b,MultiplyAny2Numbers(a,b));
    return 0;
}

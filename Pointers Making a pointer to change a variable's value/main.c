#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seth;
    int *mike;
    mike=&seth;
    seth=900;

    //check whath seth's having
    printf("Value of Seth: %d\n",seth);
    *mike+=5;  //mike has changed the value of seth
    printf("New value of Seth: %d\n",seth);
    return 0;
}

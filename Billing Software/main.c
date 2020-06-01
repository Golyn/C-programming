#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20];
    float price;
    float gst=0;
    float total=0;
    // Clearing console screen
    system("cls");
    printf("\n Billing Software for Cafe Caffee Joint\n");
    printf("\n ================================\n");
    printf("\n Enter the name of the Item\n");
    scanf("%s",a);
    printf("\n Enter the price of the Item\n");
    scanf("%f",&price);
    gst = (price/100)*18;
    total = price+gst;
    printf("\n\n Cafe Caffee Joint\n");
    printf("\n ========================\n");
    printf("\n Item\tPrice\tGST\tTotal\n");
    printf("\n %s\t%.2f\t%.2f\t%.2f\n",a,price,gst,total);
    printf("\n ========================\n");
    printf("\n Thank You! Do Visit Again\n");
    // Reading characters from the screen
    getchar();
    return 0;
}


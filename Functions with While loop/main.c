#include <stdio.h>
#include <stdlib.h>

float celsius_fahrenheit(float celsius)
{
    return celsius*9/5+32;
}

float celsius_kelvin(float celsius)
{
    return celsius+273.15;
}


int main()
{
    float celsius =0;
    while(celsius<100)
    {
      printf("%.2fC = %.2fF = %.2fK\n",celsius,celsius_fahrenheit(celsius),celsius_kelvin(celsius));
      celsius=celsius+10; //Will add 10 to celsius on subsequent iteration
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celcius =0, fahrenheit,kelvin;
    while(celcius<100)
    {
        celcius=celcius+10;
        fahrenheit =celcius*9/5+32;
        kelvin=celcius+273.15f;  //f means we are explicitly telling the compiler to treat it as a single precision floating point value
        printf("%.2fC = %.2fF = %.2fK\n",celcius, fahrenheit,kelvin);
    }

    return 0;
}

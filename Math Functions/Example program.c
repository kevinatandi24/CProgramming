#include <stdio.h>
#include <math.h>

int main()
{
    float a = 2;

    printf("sin(2) = %f\n", sin(a));
    printf("cos(2) = %f\n", cos(a));
    printf("tan(2) = %f\n", tan(a));
    printf("exp(2) = %f\n", exp(a));        // exponential
    printf("log(2) = %f\n", log(a));        // natural log (base e)
    printf("log10(2) = %f\n", log10(a));    // log base 10
    printf("sqrt(2) = %f\n", sqrt(a));      // square root
    printf("cbrt(2) = %f\n", cbrt(a));      // cube root

    return 0;
}

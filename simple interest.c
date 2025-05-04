#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter Principle\n");
    scanf("%f",&p);
    printf("Enter rate of interest\n");
    scanf("%f",&r);
    printf("Enter time\n");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interest=%.2f",si);
    return 0;
}
//Output: Enter Principle
// 1000
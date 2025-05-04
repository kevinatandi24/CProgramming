#include<stdio.h>
#include<string.h>
int main()
{
    float a1,a2,a3;
    printf("Enter first angle\n");
    scanf("%f",&a1);
    printf("Enter second angle\n");
    scanf("%f",&a2);
    printf("Enter third angle\n");
    scanf("%f",&a3);
    if((a1+a2+a3)==180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}
// Triangle check whether it is valid or not
// Output: Enter first angle
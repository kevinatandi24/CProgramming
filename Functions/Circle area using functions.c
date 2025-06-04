#include<stdio.h>
void area(float radius)
{
    float ar=3.14*radius*radius;
    printf("Area of circle=%f",ar);
}
int main()
{
    float r;
    printf("Enter radius of circle =");
    scanf("%f",&r);
    area(r);
}
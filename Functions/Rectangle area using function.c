#include<stdio.h>
void area (int height,int width)
{
    int ar = height * width;
    printf("Area of rectangle = %d",ar);
}
int main()
{
    int h,w;
    printf("Enter height =");
    scanf("%d",&h);
    printf("Enter width =");
    scanf("%d",&w);
    area(h,w);
}
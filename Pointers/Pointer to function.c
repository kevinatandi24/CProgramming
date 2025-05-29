#include <stdio.h>
void area(int *h,int *w)
{
    int ar =*h * *w;
    printf("Area of rectangle =%d",ar);
}
int main()
{
    int x,y;
    printf("Enter height\n");
    scanf("%d",&x);
    printf("Enter width\n");
    scanf("%d",&y);
    area(&x,&y);
}
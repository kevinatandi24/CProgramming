#include <stdio.h>
int add(int *y,int *z)
{
    int x;
    x=*y+*z;
    printf("Add =%d",x);
}
int main()
{
    int a=10,b=50;
    add(&a,&b);
}
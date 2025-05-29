#include<stdio.h>
int main()
{
    int a,b,c;
    int *p,*q,*r;

    p=&a;
    q=&b;
    r=&c;
    printf("Enter first number:\n");
    scanf("%d",q);
    printf("Enter second number:\n");
    scanf("%d",r);

    *p=*q+*r;
    printf("Add=%d",*p);


}
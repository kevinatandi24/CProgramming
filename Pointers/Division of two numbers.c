#include<stdio.h>
int main()
{
    int a,b=210, c=30;
    int *p,*q,*r;
    p=&a;
    q=&b;
    r=&c;

    *p=*q / *r;
    printf("Div=%d",*p);
    
}
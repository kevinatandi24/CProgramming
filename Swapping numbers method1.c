#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    printf("Before swapping a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;
}
// Swapping two numbers using third variable 
//Output: Before swapping a=10 and b=20
// After swapping a=20 and b=10     
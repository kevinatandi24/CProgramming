#include<stdio.h>
int main()
{
    int b,p,fact=1;
    printf("Enter base:\n");
    scanf("%d", &b);
    printf("Enter  power:\n");
    scanf("%d",&p);
    // Using for loop to calculate power
    for(int i=1; i<=p; i++)
    {
        fact=fact*b;
    }   
    printf("Result %d^%d = %d\n", b, p, fact);
    return 0;
}
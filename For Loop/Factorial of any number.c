#include<stdio.h>
int main()
{
    int no, fact=1;
    printf("Enter a number to find its factorial:\n");
    scanf("%d", &no);
    // Using for loop to calculate factorial
    for(int i=1; i<=no; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d\n", no, fact);
    return 0;
}
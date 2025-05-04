#include<stdio.h>
int main()
{
    int f,s;
    printf("Enter first number\n");
    scanf("%d",&f);
    printf("Enter second number\n");
    scanf("%d",&s);
    if(f>s)
    {
        printf("First number is greater\n");
    }
    if(f<s)
    {
        printf("Second number is greater\n");
    }
    if(f==s)
    {
        printf("Both are equal");
    }
    return 0;
}
//end program
// This program compares two integers and prints which one is greater or if they are equal.
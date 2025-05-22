#include<stdio.h>
int main()
{
    int no,b,sum=0;
    printf("Enter any number\n");
    scanf("%d",&no);
    while(no != 0)
    {
        b = no % 10;         // Get the last digit
        sum = sum + b;      // Add the digit to sum
        no = no / 10;        // Remove the last digit
    }
    printf("Sum of digits is %d",sum);
    return 0;
}
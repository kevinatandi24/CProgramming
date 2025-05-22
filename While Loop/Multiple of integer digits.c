#include<stdio.h>
int main()
{
    int no,b,m=1;
    printf("Enter any number\n");
    scanf("%d",&no);
    while(no != 0)
    {
        b = no % 10;         // Get the last digit
        m = m * b;      // Add the digit to sum
        no = no / 10;       // Remove the last digit
    }
    printf("Total multipy of digits is %d",m);
    return 0;
}
#include<stdio.h>
int main()
{
    int no,b,rev=0,cpy;
    printf("Enter any number\n");
    scanf("%d",&no);
    cpy =no;
    while(no != 0)
    {
        b = no % 10;         // Get the last digit
        rev = rev * 10 + b;  // Append the digit to rev
        no = no / 10;        // Remove the last digit
    }
    if (cpy==rev)
    printf("Palindrome");
    else
    printf("Not Palindrome");

    return 0;

}
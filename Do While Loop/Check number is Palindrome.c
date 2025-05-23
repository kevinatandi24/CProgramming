#include<stdio.h>

int main()
{
    int no, b, rev = 0, cpy;
    printf("Enter any number\n");
    scanf("%d", &no);
    cpy = no; // Store the original number

    // Reverse the number
    do
    {
        b = no % 10;       // Get the last digit
        rev = rev * 10 + b; // Build the reversed number
        no = no / 10;      // Remove the last digit
    }
    while (no != 0);

    // Check if the original number is equal to its reverse
    if (cpy == rev)
    {
        printf("Palindrome\n"); // Corrected: Use printf to display "Palindrome"
    }
    else
    {
        printf("Not Palindrome\n"); // Added newline for consistency
    }

    return 0;
}
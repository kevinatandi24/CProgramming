#include<stdio.h>
int main()
{
    int number, a, b, c, d, e, f;
    printf("Enter a 5 digit number: ");
    scanf("%d", &number);

    // Extract digits
    a = number;    
    b = number / 10000;       // 1st digit
    c = (number / 1000) % 10; // 2nd digit
    d = (number / 100) % 10;  // 3rd digit
    e = (number / 10) % 10;   // 4th digit
    f = number % 10;          // 5th digit

    // Print the digits
    printf("The digits are: %d %d %d %d %d\n", b, c, d, e, f);
    return 0;
}
#include<stdio.h>

int main()
{
    int no, b;
    printf("Enter any number\n");
    scanf("%d", &no);
    printf("Reverse is: "); // Added a colon for better readability

    if (no == 0) { // Handle the case where the input is 0
        printf("0");
    } else {
        do {
            b = no % 10; // Get the last digit
            printf("%d", b); // Print the last digit
            no = no / 10; // Remove the last digit
        } while (no != 0);
    }
    printf("\n"); // Add a newline for better output formatting
    return 0;
}
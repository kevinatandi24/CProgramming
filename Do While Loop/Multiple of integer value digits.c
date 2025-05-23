#include<stdio.h> // Include standard input/output library

int main()
 {
    int no,b,m=1;    // Declare integer to store the input number
    
    // Prompt the user to enter a number
    printf("Enter any number:\n");
    // Read the integer input from the user
    scanf("%d", &no);

    // Use a do-while loop to process each digit
    // The loop runs at least once, even for single-digit numbers
    do {
        b = no % 10;   // Get the last digit of the number
        m = m * b;     // Multiply the current product (m) by the extracted digit (b)
        no = no / 10;  // Remove the last digit from the number
    } while (no != 0); // Continue the loop as long as there are digits left (number is not 0)

    // Print the final product of the digits
    printf("Total multiply of digits = %d\n", m);

    return 0; // Indicate successful program execution
}
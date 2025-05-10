#include<stdio.h> // Include standard input/output library

int main()
{
    int no1, no2, m = 1; // Declare variables: no1 and no2 for input numbers, m to store the HCF

    // Prompt the user to enter the first number
    printf("Enter first number\n");
    scanf("%d", &no1); // Read the first number

    // Prompt the user to enter the second number
    printf("Enter second number\n");
    scanf("%d", &no2); // Read the second number

    // Check if either number is zero
    if (no1 == 0 || no2 == 0)
    {
        // If either number is zero, HCF is not defined
        printf("HCF is not defined for zero.\n");
        return 0; // Exit the program
    }

    // Using a for loop to find the HCF
    for (int i = 1; i <= no1 && i <= no2; i++) // Loop from 1 to the smaller of the two numbers
    {
        // Check if i is a common factor of both numbers
        if (no1 % i == 0 && no2 % i == 0)
        {
            m = i; // Update m to the current common factor
        }
    }

    // Print the HCF of the two numbers
    printf("HCF of %d and %d is %d\n", no1, no2, m);

    return 0; // Indicate successful program termination
}
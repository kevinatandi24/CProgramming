#include <stdio.h>

int main() {
    int no, first, last, temp;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &no);

    temp = no;

    // --- Get the last digit ---
    last = temp % 10; // Get the last digit

    // --- Get the first digit ---
    // If the number is a single digit (e.g., 5, 0), the first digit is the number itself.
    if (temp == 0) {
        first = 0;
    } else {
        do {
            first = temp % 10;
            temp = temp / 10;
        } while (temp != 0); // Loop until all digits are processed
    }

    // Print the results
    printf("First digit = %d and last digit = %d\n", first, last);

    return 0;
}
#include<stdio.h>

// Function to check if n1 is a multiple of n2
int is_Multiple(int n1, int n2) {
    if (n2 == 0) {
        return 0; // Avoid division by zero
    }
    return (n1 % n2 == 0);
}

int main() {
    int n1, n2;

    // Input two integers
    printf("Input the first integer: ");
    scanf("%d", &n1);
    printf("Input the second integer: ");
    scanf("%d", &n2);

    // Check if n1 is a multiple of n2
    if (is_Multiple(n1, n2)) {
        printf("%d is a multiple of %d.\n", n1, n2);
    } else {
        printf("%d is not a multiple of %d.\n", n1, n2);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int first_array[50], second_array[50], third_array[100];
    int n, i;

    // Input: number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: elements of first array
    printf("Now enter %d integer values for the first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &first_array[i]);
    }

    // Input: elements of second array
    printf("Now enter %d integer values for the second array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &second_array[i]);
    }

    // Merging first array into third array
    for (i = 0; i < n; i++) {
        third_array[i] = first_array[i];
    }

    // Merging second array into third array
    for (i = 0; i < n; i++) {
        third_array[i + n] = second_array[i];
    }

    // Output: merged array
    printf("After merging, the third array is:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", third_array[i]);
    }
    printf("\n");

    return 0;
}

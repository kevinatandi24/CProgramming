#include <stdio.h>

// Function to calculate and print array elements and their sum
void array(int arr[5]) {
    int sum = 0;
    printf("Elements are given below:\n");
    for (int i = 0; i <= 4; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nTotal sum = %d\n", sum);
}

int main() {
    int b[5];
    printf("Enter 5 integer values one by one:\n");
    for (int j = 0; j <= 4; j++) {
        scanf("%d", &b[j]);
    }
    array(b);
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter element %d\n", i + 1);
        scanf("%d", &arr[i]);  // Fixed scanf
    }

    printf("Elements are given below:\n");
    for(int j = 0; j < 5; j++)
    {
        printf("%d ", arr[j]);  // Adds space between elements
    }

    printf("\n");  // Add this to move to the next line after printing

    return 0;
}

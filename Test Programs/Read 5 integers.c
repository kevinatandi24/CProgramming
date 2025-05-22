#include<stdio.h>
int main() {
    int largest, smallest;
    int int1, int2, int3, int4, int5;

    printf("Input 5 integers: ");
    scanf("%d %d %d %d %d", &int1, &int2, &int3, &int4, &int5);

    // Initialize largest and smallest with the first input
    largest = smallest = int1;

    // Compare the rest of the integers
    if (int2 > largest) largest = int2;
    if (int2 < smallest) smallest = int2;

    if (int3 > largest) largest = int3;
    if (int3 < smallest) smallest = int3;

    if (int4 > largest) largest = int4;
    if (int4 < smallest) smallest = int4;

    if (int5 > largest) largest = int5;
    if (int5 < smallest) smallest = int5;

    printf("The Largest value is : %d\n", largest);
    printf("The Smallest value is : %d\n", smallest);

    return 0;
}
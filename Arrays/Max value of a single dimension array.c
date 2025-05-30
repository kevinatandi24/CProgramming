#include<stdio.h>

int main()
{
    int a[50], n, max;
    printf("Enter how many elements you want to store\n");
    scanf("%d", &n);

    printf("Now enter %d numbers one by one\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for(int j = 1; j < n; j++)  // Start from index 1
    {
        if(max < a[j])
            max = a[j];
    }

    printf("Maximum value = %d\n", max);

    return 0;
}

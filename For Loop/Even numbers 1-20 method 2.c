#include<stdio.h>
int main()
{
    printf("Even numbers from 1 to 20 are given below:\n");
    for(int i=2; i<=20; i+=2)
    {
        // Incrementing by 2 to get even numbers
        // Starting from 2      
        printf("%d ", i);
    }
    return 0;   
}
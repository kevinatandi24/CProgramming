#include<stdio.h>
int main()
{
    int no, sum=0;
    printf("Enter any number:\n");
    scanf("%d", &no);
    printf("Natural numbers from 1 to %d are given below:\n", no);
    for(int i=1; i<=no; i++)
    {
        printf("%d ", i);
        sum+=i;
    }
    printf("\nSum of natural numbers from 1 to %d is %d\n", no, sum);
    
    return 0;
}
#include<stdio.h>
int main()
{
    int no;
    printf("Enter any number: ");
    scanf("%d", &no);
    printf("Natural number from 1 to %d is given below:\n", no);
    for(int i=1; i<=no; i++)
    {
        printf("%d ", i);
    }
    return 0;
}

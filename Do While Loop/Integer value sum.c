#include<stdio.h>
int main()
{
    int no,b,sum=0;
    printf("Enter any number\n");
    scanf("%d",&no);
    do
    {
        b=no%10;
        sum=sum+b;
        no=no/10;
    } while (no!=0);
        printf("Total sum of digits =%d",sum);

    return 0;
}
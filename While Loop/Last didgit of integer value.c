#include<stdio.h>
int main()
{
    int no,b,f;
    printf("Enter any number\n");
    scanf("%d",&no);
    f=no%10;
    while(no!=0)
    {
        b=no%10;
        no=no/10;

    }
printf("First digit = %d and last digit = %d",b,f);

return 0;
}
#include<stdio.h>
int main()
{
    int no;
    printf("Enter any number\n");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("%d is Even",no);
    }
    else
        {
        printf("%d is Odd",no);
    }
    return 0;
}
//end program
// This program checks whether the entered number is even or odd.
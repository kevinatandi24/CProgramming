#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    printf("Enter any alphabet\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}
//end main function
//end program
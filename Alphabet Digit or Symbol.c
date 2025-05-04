#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90||ch>=97&&ch<=122)
    {
        printf("It is alphabet");
    }
    else if(ch>=48&&ch<=57)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is special sysmbol");
    }
  return 0;
}
//end main function
//end program
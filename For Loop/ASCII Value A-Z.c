#include<stdio.h>
int main()
{
    char ch;
    printf("Uppercase letters from A to Z are given below:\n");
    for(ch='A'; ch<='Z'; ch++)
    {
        printf("%c ", ch);
    }
    return 0;
}
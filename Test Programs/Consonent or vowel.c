#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("Consonent");
    }
    return 0;
}
//end program
// This program checks whether the entered character is a vowel or consonant.   
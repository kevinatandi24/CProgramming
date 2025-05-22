#include<stdio.h>
int main ()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
    return 0;
}
// // Voting program to check whether a person is eligible for voting or not
// // Output: Enter your age
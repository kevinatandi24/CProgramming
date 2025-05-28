#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
        
            printf("%c ", (i + 64)); // ASCII value of 'A' is 65, so 'A' corresponds to i=1, 'B' to i=2, etc.
        }  

        printf("\n");
    }
}
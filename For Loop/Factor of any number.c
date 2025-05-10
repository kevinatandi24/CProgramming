#include<stdio.h>
int main()
{
    int no, fact=1;
    printf("Enter any number\n");
    scanf("%d", &no);
    // Using for loop to find factors
    printf("Factors of %d are given below:\n", no);
       // Using for loop to find factors  
    for(int i=1; i<=no; i++)
    {
        if(no%i==0)
        {
            printf("%d ", i);
        }
    }
    return 0;

}
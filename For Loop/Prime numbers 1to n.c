#include<stdio.h>
int main()
{
    int n,m,num=0;
    // Prompt the user to enter the upper limit for prime numbers   
    printf("Enter any number upto where you want to print prime number\n");
    scanf("%d",&n);
    printf("Prime numbers from 1 to %d are given below:\n",n);
    for(int i=2;i<=n;i++)
    {
        m=0; // Initialize m to 0 for each number
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                m=1; // Set m to 1 if i is divisible by j
                break; // Exit the loop if a divisor is found
            }
        }
        if(m==0) // Check if m is still 0 (indicating i is prime)
        {
            printf("%d ",i); // Print the prime number
        }
    }
    return 0; // Indicate successful program termination

}
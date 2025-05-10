#include<stdio.h>
int main()
{
    int no,m=0;
    printf("Enter a number\n");
    scanf("%d",&no);
    // Using for loop to check if the number is prime
    for(int i=2;i<=no/2;i++)
    {
        if(no%i==0)
        {
            m=1; // Set m to 1 if no is divisible by i
            break; // Exit the loop if a divisor is found
        }
    }
    // Check if the number is prime
    if(m==0 && no>1)
    {
        printf("%d is a prime number\n",no); // Print if the number is prime
    }
    else
    {
        printf("%d is not a prime number\n",no); // Print if the number is not prime
    }
    return 0; // Indicate successful program termination
}
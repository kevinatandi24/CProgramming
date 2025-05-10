#include<stdio.h>
int main()
{
    int no,a,b=1,c=0;
    printf("Enter a number upto where you want to print fibonacci series\n");
    scanf("%d",&no);
    printf("Fibonacci series upto %d is given below:\n",no);
    for(int i=1;i<=no;i++)
    {
        if(i==1)
        {
            printf("%d ",b); // Print the first number in the series
            continue; // Skip to the next iteration
        }
        if(i==2)
        {
            printf("%d ",c); // Print the second number in the series
            continue; // Skip to the next iteration
        }
        a=b+c; // Calculate the next number in the series
        printf("%d ",a); // Print the next number
        b=c; // Update b to the previous number
        c=a; // Update c to the current number
    }   
    return 0; // Indicate successful program termination
    
}
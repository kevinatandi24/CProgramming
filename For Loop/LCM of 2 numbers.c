#include<stdio.h>
int main()
{
    int no1, no2;
    printf("Enter first number\n");
    scanf("%d", &no1);
    printf("Enter second number\n");   
    scanf("%d", &no2);
    // Using for loop to find LCM
    for (int i=1; i<=no1*no2; i++)
    {
        if(i%no1==0 && i%no2==0)
        {
            printf("LCM of %d and %d is %d\n", no1, no2, i);
            break;
        }
    }
    return 0;   

}
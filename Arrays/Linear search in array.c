#include<stdio.h>
int main()
{
    int roll[10]={14,52,63,45,65,84,75,96,51,62};
    int r,m=0;

    printf("Roll number is given below\n");
    for(int i=0;i<=9;i++)
    printf("%d",roll[i]);

    printf("Enter your rollno to search\n");
    scanf("%d",&r);
    for(int j=0;j<=9;j++)
    {
        if(r==roll[j])
        {
            printf("Rollno is found at position = %d",j+1);
            m=1;
        }
    }
    if(m==0)
    {
        printf("Not found");
    }
   
}
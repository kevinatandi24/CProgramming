#include<stdio.h>
int main()
{
    int a[5]={10,20,30,50,90};
    int b[5];
    printf("First array is given below \n");
    for(int i=0;i<=4;i++)
    {
        printf("%d",a[i]);
        b[i]=a[i];

    }
    printf("After copy second array is given below\n");
    for(int j=0;j<=4;j++)
    {
        printf("%d",a[j]);
    }
    return 0;
}
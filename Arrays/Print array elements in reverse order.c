#include<stdio.h>
int main()
{
    int arr[5]={10,20,50,40,60};
    printf("Element in reverse order is given below\n");
    for(int i=4;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
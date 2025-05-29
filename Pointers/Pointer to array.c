#include <stdio.h>
int main()
{
    int arr[10]={10,20,50,40,60,80,70,25,45,65};
    for(int i=0;i<=9;i++)
    {
        printf("%d\n",*(arr+i));
    }
}

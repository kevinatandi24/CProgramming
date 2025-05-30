#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],n;
    printf("How many numbers you want to store in a single array\n");
    scanf("%d",&n);

    printf("Now eneter %d element of first array one by one\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Now enter %d element of second array one by one\n",n);
    for(int j=0;j<n;j++)
    scanf("%d",&b[j]);

    printf("Addition of first and second arrray is given below\n");
    for (int k=0;k<n;k++)
    {
        c[k] = a[k]+ b[k];
        printf("%d",c[k]);
    }
    return 0;
}
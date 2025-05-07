#include<stdio.h>
int main()
{
    printf("Number\tSquare\tCube\n");
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    return 0;
}
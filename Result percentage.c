#include<stdio.h>
int main()
{
    float p;
    printf("Enter your percent\n");
    scanf("%f",&p);
    if(p<=100&&p>=60)
    {
        printf("First division");
    }
    if(p<60&&p>=45)
    {
        printf("Second class");
    }
    if(p<45&&p>=33)
    {
        printf("Third class");
    }
    if(p<33)
    {
        printf("Fail");
    }
    return 0;
}
//Output: Enter your percent
// 45   
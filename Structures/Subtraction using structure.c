#include<stdio.h>
struct Arithmetic
{
    int x;
    int y;
    int z;
};
int main()
{
    struct Arithmetic obj;
   printf("Enter first number:\n");
   scanf("%d",&obj.y);
   printf("Enter second number:\n");
   scanf("%d",&obj.z);

    obj.x=obj.y - obj.z;
    printf("Sub=%d",obj.x);

    return 0;

}
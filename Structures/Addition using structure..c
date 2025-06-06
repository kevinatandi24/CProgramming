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
    obj.y=20;
    obj.z=50;
    obj.x=obj.y + obj.z;
    printf("Add=%d",obj.x);

    return 0;

}
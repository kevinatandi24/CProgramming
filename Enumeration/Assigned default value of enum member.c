#include<stdio.h>
enum age
{
    Rocky=21,
    Bob =19,
    John =18,
    Peter = 23,
    Phoebe = 24,
    Rose = 16
};
int main()
{
    enum age obj;
    obj=Phoebe;
    printf("The age of Phoebe is =%d",obj);
    return 0;
}
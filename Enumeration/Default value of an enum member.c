#include<stdio.h>
enum week {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main()
{

    enum week obj;
    obj = Wednesday;

    printf("Value of Wednesday is =%d",obj);
    
    return 0;

}
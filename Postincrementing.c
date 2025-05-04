#include<stdio.h>
int main()
{
    int c;
    c=5;

    //demonstrate post increment
    printf("%d\n",c);//print 5
    printf("%d\n",c++);//print 5 the post increment
    printf("%d\n\n",c);//print 6

    //demonstrate pre increment
    c=5;
    printf("%d\n",c);//print 5
    printf("%d\n",++c);//pre increment then print 6
    printf("%d\n",c);//print 6

    return 0;
}
//end program
// This program demonstrates the difference between post-increment and pre-increment operators in C.
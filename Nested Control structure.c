#include<stdio.h>
int main()
{
    int passes=0;
    int failures=0;
    int student=1;
    int result;

    while (student<=10)
    {
        printf("Enter result(1=pass,2=fail): ");
        scanf("%d",&result);

        if(result==1)
        {
            passes=passes+1;
        }
        else
        {
            failures=failures+1;
        }
        student=student+1;
    }
    printf("passed %d\n",passes);
    printf("failed %d\n",failures);

    if(passes>8)
    {
        printf("Bonus to instructor!\n");
    }
    return 0;
}
//end program
// This program counts the number of students who passed and failed in a test.
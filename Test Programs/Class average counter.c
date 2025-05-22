
#include<stdio.h>
int main(void)//function main begins program
{
    int counter;// number of grade to be entered first
    int grade;// grade value
    int total;//sum of grades input by user
    int average;//average of grades

    //initialization phase

    total = 0;//initialize total
    counter = 1;//initialize loop counter

    //processing phase

    while(counter <=10)//loop 10 times
    {
        printf("Enter grade: ");//prompt for input
        scanf("%d", &grade);//read grade from user
        total = total + grade;//add grade to total
        counter = counter + 1;//increment counter

    }
    //termination phase

    average = total/10;//integer division
    printf("Class average is %d\n",average);//display results
    return 0;//program ended successfully
} //end function main
//end program
// This program calculates the average of 10 grades entered by the user.
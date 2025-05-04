#include<stdio.h>
int main()//function main begins program
{
    int counter;//number of grades entered
    int grade;//grade value
    int total;//sum of grades
    float average;//number with decimal point for average

    //initialization phase
    total=0;//initialize total
    counter=0;//initialize loop counter

    //processing phase
    //get first grade from user
    printf("Enter grade,-1 to end: ");//prompt for input
    scanf("%d",&grade);//read grade from user

    //loop while sentinel value not yet read from user
    while (grade !=-1)
    {
        total=total+grade;//add grade to total
        counter=counter+1;//increment counter

        printf("Enter grade,-1 to end: ");//prompt for input
        scanf("%d",&grade);//read next grade
    }//end while

     //termination phase
     //if user entered at least one grade
    if(counter !=0)
    {
        //calculate average of all grades entered
        average=(float)total/counter;//avoid truncation
        printf("Class average is %.2f\n",average);//display average with two digits of precision
    }//end if
    else
    {
        printf("No grades were entered\n");//if no grades were entered output message
    }//end else

    return 0;//indicate program ended successfuly
}//end function main
//end program
// This program calculates the average of grades entered by the user until a sentinel value (-1) is entered.
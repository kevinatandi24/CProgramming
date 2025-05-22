#include<stdio.h>
int main()
{
    int no;
    printf("Enter any number\n");
    scanf("%d",&no);
    switch(no)

    {
        case 1:
            printf("Monday");
            break;
             case 2:
            printf("Tuesday");
            break;
             case 3:
            printf("Wednesday");
            break;
             case 4:
            printf("Thursday");
            break;
             case 5:
            printf("Friday");
            break;
             case 6:
            printf("Saturday");
            break;
             case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Input");
    }
}
//end program
// This program takes an integer input representing a day of the week (1-7) and prints the corresponding day name.
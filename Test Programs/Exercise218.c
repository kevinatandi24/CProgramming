#include<stdio.h>
int main()
{
    int integer1;
    int integer2;

    printf("Please enter two integers\n");
    scanf("%d%d",&integer1,&integer2);

    if(integer1>integer2){
        printf("%d is larger\n",integer1);
    }
    if(integer2>integer1){
        printf("%d is larger\n",integer2);
    }
    if(integer1==integer2){
        printf("These numbers are equal.\n");
    }
    return 0;
}
//end program
// This program compares two integers and prints the larger one or indicates if they are equal.
// The program uses if statements to check the conditions and prints the appropriate message based on the comparison results.
// The program ends with a return statement indicating successful completion.
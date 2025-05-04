#include <stdio.h>
int main()//function main begins program execution
{
   int num1;//first number to be read from user
    int num2;//second number to be read from the user

    printf("Enter two integers, and i will tell you\n");
    printf("the relationships they satisfy:");

    scanf("%d%d",&num1,&num2);//read two integers

    if(num1==num2){
        printf("%d is equal to %d\n",num1,num2);
    }//end if
    if(num1!=num2){
        printf("%d is not equal to %d\n",num1,num2);
    } //end if
    if(num1<num2){
        printf("%d is less than %d\n",num1,num2);
    } //end if
    if(num1>num2){
        printf("%d is greater than %d\n",num1,num2);
    } // end if
    if(num1<=num2){
        printf("%d is less than or equal %d\n",num1,num2);
    } //end if
    if(num1>=num2){
        printf("%d is greater than or equal %d\n",num1,num2);
    }
    return 0;// shows program ended successfully
} // end function main
//end program   
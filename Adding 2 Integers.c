# include <stdio.h>
# include <stdlib.h>

int main(void)//function that begins the program
   {
       int integer1;// first number to be input
       int integer2;//second number to be input
       int sum;// variable in which sum will be stored

       printf("Enter first integer1\n");//prompt
       scanf("%d",& integer1);// read an integer

         printf("Enter first integer2\n");//prompt
         scanf("%d",& integer2);// read an integer

         sum = integer1 + integer2; // assign total to sum
         printf("sum is %d\n",sum); // print sum


         return 0;// to show program ended successfully
   }
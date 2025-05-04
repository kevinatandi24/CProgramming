#include<stdio.h>
int main()//start program
{

    float area,r;//declaring variables
    printf("Enter radius of circle\n");//input radius of circle
    scanf("%f",&r);//read the radius
    area=3.14*r*r;//calculate the area of the circle
    printf("Area of circle=%.2f",area);//output the result
    return 0;//indicate program ended successful
}//end main function

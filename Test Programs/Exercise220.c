#include<stdio.h>
int main()
{
int radius, diameter;
double constantValue,circumference,area;

printf("Radius of the circle: \n");
scanf("%d",&radius);

diameter=radius*2;
printf("The diameter is %d\n",diameter);

constantValue=3.14159;
circumference=constantValue*diameter;
printf("The circumference is %f\n",circumference);

area=constantValue*radius*radius;
printf("The area of he circle is %f\n",area);

return 0;

}
//end program
// This program calculates the diameter, circumference, and area of a circle based on the given radius.
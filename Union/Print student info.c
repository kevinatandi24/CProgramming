#include <stdio.h>     // Header file for input and output functions
#include <string.h>    // Header file for string handling functions

// Define a union named Student
union Student
{
    char name[200];   // Member to store name
    int rollno;       // Member to store roll number
    float marks;      // Member to store marks
};

int main ()
{
    union Student obj;  // Create an instance of the union

    // Copy a name into the name member
    strcpy(obj.name, "Kevin Atandi");  

    // Assign a value to rollno
    obj.rollno = 205;

    // Assign a value to marks
    obj.marks = 86.5;

    // Print the contents of all members
    printf("Name = %s\n", obj.name);
    printf("Rollno = %d\n", obj.rollno);
    printf("Marks = %f\n", obj.marks);

    return 0;
}

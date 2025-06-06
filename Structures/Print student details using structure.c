#include<stdio.h>
#include<string.h>

struct Student
{
    char name[200];
    int rollno;
    float marks;
};
int main()
{
    struct Student obj;
    strcpy(obj.name,"Kevin Atandi");
    obj.rollno=205;
    obj.marks = 85.4;

    printf("Name=%s\n",obj.name);
    printf("Rollno=%d\n",obj.rollno);
    printf("Marks=%f\n",obj.marks);

    return 0;
}
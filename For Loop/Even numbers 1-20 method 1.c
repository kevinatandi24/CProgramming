#include<stdio.h>
int main()
{
 printf("Even numbers from 1 to 20 are given below:\n");
 for(int i=1; i<=20; i++)
 {
  if(i%2==0)
  {
   printf("%d ", i);
  }
 }
 return 0;
}
#include<stdio.h>
int main()
{
    char s[200];
    int space=0;
    printf("Enter any string \n");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        space++;
    }
    printf("Total space in this sentence =%d",space);
    return 0;
}
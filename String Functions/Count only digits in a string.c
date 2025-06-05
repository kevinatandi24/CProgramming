#include<stdio.h>

int main()
{
    char s[200];
    int digit =0;
    printf("Enter any string\n");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>48&&s[i]<57)
        digit ++;
    }
    printf("Total Digits =%d",digit);

    return 0;
}
#include<stdio.h>
#include<conio.h>
int main ()
{
    FILE *fp;
    char msg [100];
    fp=fopen("/temp/demo.txt","r");
    fgets(msg,100,fp);
    printf("%s",msg);
    fclose(fp);

    return 0;
    
}
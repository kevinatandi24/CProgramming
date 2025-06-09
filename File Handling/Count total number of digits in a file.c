#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *sfile;
    char ch;
    int digit =0;
    sfile=fopen("/temp/easy.txt","r");
    while((ch=getc(sfile))!=EOF)
    {
        if(ch>=48&&ch<=57)
        digit++;
    }
    printf("Total number of digits =%d",digit);
    fclose(sfile);

    return 0;

}

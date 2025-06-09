#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *sfile,*dfile;
    char ch;
    sfile=fopen("/temp/easy.txt","r");
    dfile=fopen("/temp/soft.txt","w");
    while((ch=getc(sfile))!=EOF)

    putc(ch,dfile);
    fclose(sfile);
    fclose(dfile);

    return 0;
}
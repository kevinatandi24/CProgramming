#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *sfile;
    char ch;
    int alpha=0;
    sfile=fopen("/temp/easy.txt","r");
    while((ch=getc(sfile))!=EOF)
    {
      if(ch>=65&&ch<=97&&ch<=122)
      alpha++;
    }
    printf("Total number of alphabets =%d",alpha);
    fclose(sfile);

    return 0;
}
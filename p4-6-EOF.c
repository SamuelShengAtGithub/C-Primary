#include "stdio.h"
void main()
{
        //EOF 文件结束标志
        int ch=0;
        while((ch=getchar())!=EOF)
        putchar(ch);
}
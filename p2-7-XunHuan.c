#include "stdio.h"
void main()
{
    int line =0;
    while(line<30000)
    {
        printf("写代码:%d\n",line);
        line++;
    }
    if(line==30000)
    {
        printf("上岸力！\n");
    }
}
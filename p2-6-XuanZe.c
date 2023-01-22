#include "stdio.h"
void main()
{
    int input=0;
    printf("开始>\n");
    printf("你要好好学习吗？(1/0)?>:");
    scanf("%d",&input);
    if(input==1)
        printf("上岸！\n");
    else
        printf("完蛋！\n");

}
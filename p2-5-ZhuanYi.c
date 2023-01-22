#include "stdio.h"
void main()
{
    //转义字符——转变了原来的意思
    printf("%c\n",'\'');
    printf("c:\\test\\test.c\n");
    //printf在打印时可以指定格式
    printf("%c\n",'\130');//八进制的130相当于十进制88——X的ASCII码值
    //ASCII码
    //A——65
    //a——97
    //ddd——八进制
    //xdd——十六进制
    printf("%d\n",strlen("c:\test\328\test.c"));//\32 和 8 因为八进制没有8
}
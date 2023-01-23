#include "stdio.h"
//define 是一个预处理指令
    //1.define定义符号
    #define MAX 1000
    //2.define定义宏
    #define ADD(X,Y) ((X)+(Y))
void main()
{
    printf("%d\n",4*ADD(2,3));
}
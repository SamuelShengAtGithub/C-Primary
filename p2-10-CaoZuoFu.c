#include "stdio.h"
void main()
{
    int a=9/2;
    printf("%d\n",a);
    float b=9.0/2;//左右至少有一个要是小数
    printf("%f\n",b);
    int c=9%2;
    printf("%d\n",c);
    int d=2;
    int e=d<<1;//左移 移动的是二进制位 移后补0
    printf("%d\n",e);
    //&按位与 |按位或 ^按位异或
    //a+b +为双目操作符
    //单目操作符：只有一个操作数的操作符
    //0表示假 0的假为1
    //sizeof 为操作符 用来计算类型或变量的大小
    //对于变量 括号可省略 但类型 不可省略括号
    int g=10;
    printf("%d\n",sizeof(g));

    int arr[10]={0};
    printf("%d\n",sizeof(arr));//计算的是数组的总大小，单位是字节
    printf("%d\n",sizeof(arr[0]));//单个元素
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));//计算元素个数
}
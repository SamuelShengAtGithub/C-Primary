#include "stdio.h"
int g_val=2021;//全局变量 作用域是整个工程
//在其他文件使用需要声明 extern int g_val;
//执行性代码不能放在外面
void main()
{
    //作用域和生命周期
    //局部变量作用域就是变量所在的局部范围
    //全局变量
    int a=10;
    printf("a=%d\n",a);
}
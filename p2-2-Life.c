#include "stdio.h"
void main()
{
    //变量生命周期：变量的创建和销毁之间的时间段
    //
    //局部变量的生命周期 进入局部——生命开始 出局部——生命结束
    //全局变量的生命周期——程序的生命周期
    {
        int a=10;
        printf("%d\n",a);
    }
    
}
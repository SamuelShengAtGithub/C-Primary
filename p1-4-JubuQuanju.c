#include "stdio.h"
int a=100;
void main()
{
    int a=10;//局部变量,局部优先，但不推荐局部与全局同名
    printf("%d\n",a);
}